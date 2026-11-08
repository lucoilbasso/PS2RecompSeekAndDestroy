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

// Function: MIMeCtrlSetup__8WcObject
// Address: 0x1dfd40 - 0x1dfde8
void MIMeCtrlSetup__8WcObject_0x1dfd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MIMeCtrlSetup__8WcObject_0x1dfd40");
#endif

    switch (ctx->pc) {
        case 0x1dfd7cu: goto label_1dfd7c;
        case 0x1dfdc8u: goto label_1dfdc8;
        default: break;
    }

    ctx->pc = 0x1dfd40u;

    // 0x1dfd40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfd44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfd48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dfd48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dfd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dfd50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfd54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dfd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dfd58: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x1dfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x1dfd5c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DFD5Cu;
    {
        const bool branch_taken_0x1dfd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD5Cu;
        // 0x1dfd60: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd5c) {
            ctx->pc = 0x1DFDD0u;
            goto label_1dfdd0;
        }
    }
    ctx->pc = 0x1DFD64u;
    // 0x1dfd64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dfd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd68: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFD68u;
    {
        const bool branch_taken_0x1dfd68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD68u;
        // 0x1dfd6c: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd68) {
            ctx->pc = 0x1DFD74u;
            goto label_1dfd74;
        }
    }
    ctx->pc = 0x1DFD70u;
    // 0x1dfd70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1dfd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1dfd74:
    // 0x1dfd74: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DFD74u;
    SET_GPR_U32(ctx, 31, 0x1DFD7Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DFD74u, 0x1DFD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD7Cu;
label_1dfd7c:
    // 0x1dfd7c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1dfd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1dfd80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dfd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd88: 0x24a582c0  addiu       $a1, $a1, -0x7D40
    ctx->pc = 0x1dfd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935232));
    // 0x1dfd8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfd90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfd94: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DFD94u;
    {
        const bool branch_taken_0x1dfd94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD94u;
        // 0x1dfd98: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd94) {
            ctx->pc = 0x1DFDC0u;
            goto label_1dfdc0;
        }
    }
    ctx->pc = 0x1DFD9Cu;
    // 0x1dfd9c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1dfd9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1dfda0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1dfda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1dfda4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dfda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dfda8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1dfda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1dfdac: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1dfdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1dfdb0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1dfdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1dfdb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFDB4u;
    {
        const bool branch_taken_0x1dfdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDB4u;
        // 0x1dfdb8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfdb4) {
            ctx->pc = 0x1DFDC8u;
            goto label_1dfdc8;
        }
    }
    ctx->pc = 0x1DFDBCu;
    // 0x1dfdbc: 0x0  nop
    ctx->pc = 0x1dfdbcu;
    // NOP
label_1dfdc0:
    // 0x1dfdc0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DFDC0u;
    SET_GPR_U32(ctx, 31, 0x1DFDC8u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DFDC0u, 0x1DFDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFDC8u;
label_1dfdc8:
    // 0x1dfdc8: 0xae3001a4  sw          $s0, 0x1A4($s1)
    ctx->pc = 0x1dfdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 16));
    // 0x1dfdcc: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x1dfdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_1dfdd0:
    // 0x1dfdd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfdd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfdd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfdd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfdd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfdd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfddc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dfddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfde0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDE0u;
        // 0x1dfde4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFDE8u;
}
