#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00143b60
// Address: 0x143b60 - 0x143bb0
void entry_00143b60_0x143b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143b60_0x143b60");
#endif

    ctx->pc = 0x143b60u;

    // 0x143b60: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x143b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x143b64: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x143b68: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x143b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x143b6c: 0x24e70050  addiu       $a3, $a3, 0x50
    ctx->pc = 0x143b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x143b70: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x143b70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x143b74: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x143b74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x143b78: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x143b78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x143b7c: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x143b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x143b80: 0xdc820020  ld          $v0, 0x20($a0)
    ctx->pc = 0x143b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x143b84: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x143b84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x143b88: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x143b88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x143b8c: 0xfca30018  sd          $v1, 0x18($a1)
    ctx->pc = 0x143b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 3));
    // 0x143b90: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x143b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x143b94: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x143b94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x143b98: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x143b98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x143b9c: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x143b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x143ba0: 0xdc820040  ld          $v0, 0x40($a0)
    ctx->pc = 0x143ba0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x143ba4: 0xfca20030  sd          $v0, 0x30($a1)
    ctx->pc = 0x143ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x143ba8: 0xdc830048  ld          $v1, 0x48($a0)
    ctx->pc = 0x143ba8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x143bac: 0xfca30038  sd          $v1, 0x38($a1)
    ctx->pc = 0x143bacu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 3));
    ctx->pc = 0x143bb0u;
}
