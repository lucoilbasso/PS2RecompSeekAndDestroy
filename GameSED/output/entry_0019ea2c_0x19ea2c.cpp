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

// Function: entry_0019ea2c
// Address: 0x19ea2c - 0x19ea80
void entry_0019ea2c_0x19ea2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea2c_0x19ea2c");
#endif

    switch (ctx->pc) {
        case 0x19ea48u: goto label_19ea48;
        case 0x19ea54u: goto label_19ea54;
        case 0x19ea60u: goto label_19ea60;
        default: break;
    }

    ctx->pc = 0x19ea2cu;

    // 0x19ea2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19ea2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19ea30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19ea30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19ea34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19ea38: 0x2631e060  addiu       $s1, $s1, -0x1FA0
    ctx->pc = 0x19ea38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959200));
    // 0x19ea3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea40: 0xc067ada  jal         func_19EB68
    ctx->pc = 0x19EA40u;
    SET_GPR_U32(ctx, 31, 0x19EA48u);
    ctx->pc = 0x19EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA40u;
    // 0x19ea44: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EB68u, 0x19EA40u, 0x19EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA48u;
label_19ea48:
    // 0x19ea48: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x19ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x19ea4c: 0xc067af6  jal         func_19EBD8
    ctx->pc = 0x19EA4Cu;
    SET_GPR_U32(ctx, 31, 0x19EA54u);
    ctx->pc = 0x19EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA4Cu;
    // 0x19ea50: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EBD8u, 0x19EA4Cu, 0x19EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA54u;
label_19ea54:
    // 0x19ea54: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x19ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x19ea58: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x19EA58u;
    SET_GPR_U32(ctx, 31, 0x19EA60u);
    ctx->pc = 0x19EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA58u;
    // 0x19ea5c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x19EA58u, 0x19EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA60u;
label_19ea60:
    // 0x19ea60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ea60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19ea64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ea68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ea6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ea6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ea70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19ea70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ea74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19ea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ea78: 0x8067b2e  j           func_19ECB8
    ctx->pc = 0x19EA78u;
    ctx->pc = 0x19EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EA78u;
    // 0x19ea7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ECB8u;
    RotMatrixMul3__9FMatrix32P9FMatrix32_0x19ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x19EA80u;
}
