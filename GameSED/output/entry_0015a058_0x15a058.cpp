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

// Function: entry_0015a058
// Address: 0x15a058 - 0x15a088
void entry_0015a058_0x15a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a058_0x15a058");
#endif

    switch (ctx->pc) {
        case 0x15a060u: goto label_15a060;
        default: break;
    }

    ctx->pc = 0x15a058u;

    // 0x15a058: 0xc0477d4  jal         func_11DF50
    ctx->pc = 0x15A058u;
    SET_GPR_U32(ctx, 31, 0x15A060u);
    ctx->pc = 0x11DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF50u, 0x15A058u, 0x15A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A060u;
label_15a060:
    // 0x15a060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a064: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15a064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15a068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a06c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15a070: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15a070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15a074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a078: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15a078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15a07c: 0x80477de  j           func_11DF78
    ctx->pc = 0x15A07Cu;
    ctx->pc = 0x15A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A07Cu;
    // 0x15a080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DF78u;
    CommandSePan__9ApcSndDrvii_0x11df78(rdram, ctx, runtime); return;
    ctx->pc = 0x15A084u;
    // 0x15a084: 0x0  nop
    ctx->pc = 0x15a084u;
    // NOP
    ctx->pc = 0x15a088u;
}
