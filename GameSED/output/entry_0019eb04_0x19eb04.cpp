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

// Function: entry_0019eb04
// Address: 0x19eb04 - 0x19eb64
void entry_0019eb04_0x19eb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eb04_0x19eb04");
#endif

    switch (ctx->pc) {
        case 0x19eb2cu: goto label_19eb2c;
        case 0x19eb38u: goto label_19eb38;
        case 0x19eb44u: goto label_19eb44;
        default: break;
    }

    ctx->pc = 0x19eb04u;

    // 0x19eb04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19eb08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19eb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19eb10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19eb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19eb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x19eb18: 0x2610e060  addiu       $s0, $s0, -0x1FA0
    ctx->pc = 0x19eb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959200));
    // 0x19eb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19eb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb20: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19eb24: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x19EB24u;
    SET_GPR_U32(ctx, 31, 0x19EB2Cu);
    ctx->pc = 0x19EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB24u;
    // 0x19eb28: 0x52823  negu        $a1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x19EB24u, 0x19EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB2Cu;
label_19eb2c:
    // 0x19eb2c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x19eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x19eb30: 0xc067af6  jal         func_19EBD8
    ctx->pc = 0x19EB30u;
    SET_GPR_U32(ctx, 31, 0x19EB38u);
    ctx->pc = 0x19EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB30u;
    // 0x19eb34: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EBD8u, 0x19EB30u, 0x19EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB38u;
label_19eb38:
    // 0x19eb38: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x19eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x19eb3c: 0xc067b12  jal         func_19EC48
    ctx->pc = 0x19EB3Cu;
    SET_GPR_U32(ctx, 31, 0x19EB44u);
    ctx->pc = 0x19EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB3Cu;
    // 0x19eb40: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC48u, 0x19EB3Cu, 0x19EB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EB44u;
label_19eb44:
    // 0x19eb44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19eb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19eb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19eb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19eb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19eb50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19eb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19eb54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19eb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19eb58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19eb5c: 0x8067b2e  j           func_19ECB8
    ctx->pc = 0x19EB5Cu;
    ctx->pc = 0x19EB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EB5Cu;
    // 0x19eb60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19ECB8u;
    RotMatrixMul3__9FMatrix32P9FMatrix32_0x19ecb8(rdram, ctx, runtime); return;
    ctx->pc = 0x19EB64u;
}
