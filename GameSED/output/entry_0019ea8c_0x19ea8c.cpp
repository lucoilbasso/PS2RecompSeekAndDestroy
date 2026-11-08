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

// Function: entry_0019ea8c
// Address: 0x19ea8c - 0x19eaf4
void entry_0019ea8c_0x19ea8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea8c_0x19ea8c");
#endif

    switch (ctx->pc) {
        case 0x19eab4u: goto label_19eab4;
        case 0x19eac4u: goto label_19eac4;
        case 0x19ead4u: goto label_19ead4;
        default: break;
    }

    ctx->pc = 0x19ea8cu;

    // 0x19ea8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ea90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19ea90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19ea98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19ea98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ea9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19ea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19eaa0: 0x2610e060  addiu       $s0, $s0, -0x1FA0
    ctx->pc = 0x19eaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959200));
    // 0x19eaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eaa8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x19eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19eaac: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x19EAACu;
    SET_GPR_U32(ctx, 31, 0x19EAB4u);
    ctx->pc = 0x19EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAACu;
    // 0x19eab0: 0x52823  negu        $a1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x19EAACu, 0x19EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAB4u;
label_19eab4:
    // 0x19eab4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19eab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19eab8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x19eab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19eabc: 0xc067af6  jal         func_19EBD8
    ctx->pc = 0x19EABCu;
    SET_GPR_U32(ctx, 31, 0x19EAC4u);
    ctx->pc = 0x19EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EABCu;
    // 0x19eac0: 0x52823  negu        $a1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EBD8u, 0x19EABCu, 0x19EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAC4u;
label_19eac4:
    // 0x19eac4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x19eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19eac8: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x19eac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x19eacc: 0xc067ada  jal         func_19EB68
    ctx->pc = 0x19EACCu;
    SET_GPR_U32(ctx, 31, 0x19EAD4u);
    ctx->pc = 0x19EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EACCu;
    // 0x19ead0: 0x52823  negu        $a1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EB68u, 0x19EACCu, 0x19EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAD4u;
label_19ead4:
    // 0x19ead4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ead4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ead8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19eadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19eae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19eae4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19eae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eae8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19eae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19eaec: 0x8067b2e  j           func_19ECB8
    ctx->pc = 0x19EAECu;
    ctx->pc = 0x19EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EAECu;
    // 0x19eaf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ECB8u;
    RotMatrixMul3__9FMatrix32P9FMatrix32_0x19ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x19EAF4u;
}
