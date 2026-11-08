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

// Function: entry_001cafb4
// Address: 0x1cafb4 - 0x1cafd4
void entry_001cafb4_0x1cafb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cafb4_0x1cafb4");
#endif

    switch (ctx->pc) {
        case 0x1cafbcu: goto label_1cafbc;
        default: break;
    }

    ctx->pc = 0x1cafb4u;

    // 0x1cafb4: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1CAFB4u;
    SET_GPR_U32(ctx, 31, 0x1CAFBCu);
    ctx->pc = 0x1CAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFB4u;
    // 0x1cafb8: 0x8e44aa44  lw          $a0, -0x55BC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1CAFB4u, 0x1CAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAFBCu;
label_1cafbc:
    // 0x1cafbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cafbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cafc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cafc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cafc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cafc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cafc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cafc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cafcc: 0x8073d1a  j           func_1CF468
    ctx->pc = 0x1CAFCCu;
    ctx->pc = 0x1CAFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAFCCu;
    // 0x1cafd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF468u;
    abort_0x1cf468(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAFD4u;
}
