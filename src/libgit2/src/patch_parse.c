#ifdef _WIN32
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat"
#endif

		return parse_err("invalid file mode at line %"PRIuZ, ctx->line_num);
		return parse_err("invalid hex formatted object id at line %"PRIuZ,
		return parse_err("invalid similarity percentage at line %"PRIuZ,
		return parse_err("invalid similarity percentage at line %"PRIuZ,
		return parse_err("corrupt git diff header at line %"PRIuZ, ctx->line_num);
		return parse_err("corrupt old path in git diff header at line %"PRIuZ,
		return parse_err("corrupt new path in git diff header at line %"PRIuZ,
				error = parse_err("trailing data at line %"PRIuZ, ctx->line_num);
			error = parse_err("invalid patch header at line %"PRIuZ,
		return parse_err("oversized patch hunk header at line %"PRIuZ,
	giterr_set(GITERR_PATCH, "invalid patch hunk header at line %"PRIuZ,
			error = parse_err("invalid patch instruction at line %"PRIuZ,
			error = parse_err("invalid patch hunk at line %"PRIuZ, ctx->line_num);
			error = parse_err("invalid hunk header outside patch at line %"PRIuZ,
			"unknown binary delta type at line %"PRIuZ, ctx->line_num);
		error = parse_err("invalid binary size at line %"PRIuZ, ctx->line_num);
			error = parse_err("invalid binary length at line %"PRIuZ, ctx->line_num);
			error = parse_err("truncated binary data at line %"PRIuZ, ctx->line_num);
			error = parse_err("truncated binary data at line %"PRIuZ, ctx->line_num);
			error = parse_err("trailing data at line %"PRIuZ, ctx->line_num);
		return parse_err("corrupt git binary header at line %"PRIuZ, ctx->line_num);
		return parse_err("corrupt git binary separator at line %"PRIuZ,
		return parse_err("corrupt git binary patch separator at line %"PRIuZ,
		return parse_err("corrupt git binary header at line %"PRIuZ, ctx->line_num);
			"header filename does not contain %"PRIuZ" path components",
		if ((ctx->content = git__malloc(content_len)) == NULL) {
			git__free(ctx);
		}
#ifdef _WIN32
#pragma GCC diagnostic pop
#endif