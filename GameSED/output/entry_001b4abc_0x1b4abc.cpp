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

// Function: entry_001b4abc
// Address: 0x1b4abc - 0x1b4b38
void entry_001b4abc_0x1b4abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4abc_0x1b4abc");
#endif

    switch (ctx->pc) {
        case 0x1b4adcu: goto label_1b4adc;
        case 0x1b4b18u: goto label_1b4b18;
        case 0x1b4b28u: goto label_1b4b28;
        case 0x1b4b30u: goto label_1b4b30;
        default: break;
    }

    ctx->pc = 0x1b4abcu;

    // 0x1b4abc: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x1b4abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x1b4ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4ac4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b4ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b4ac8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4acc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4ad0: 0x2673a6c0  addiu       $s3, $s3, -0x5940
    ctx->pc = 0x1b4ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944448));
    // 0x1b4ad4: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4AD4u;
    SET_GPR_U32(ctx, 31, 0x1B4ADCu);
    ctx->pc = 0x1B4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4AD4u;
    // 0x1b4ad8: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4AD4u, 0x1B4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4ADCu;
label_1b4adc:
    // 0x1b4adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b4adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4ae0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1b4ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1b4ae4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4ae8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1b4ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1b4aec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1b4aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1b4af0: 0x2684b180  addiu       $a0, $s4, -0x4E80
    ctx->pc = 0x1b4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947200));
    // 0x1b4af4: 0x26c79a80  addiu       $a3, $s6, -0x6580
    ctx->pc = 0x1b4af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941312));
    // 0x1b4af8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1b4af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1b4afc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4b00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b04: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b4b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b4b08: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1b4b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b0c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4b10: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4B10u;
    SET_GPR_U32(ctx, 31, 0x1B4B18u);
    ctx->pc = 0x1B4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B10u;
    // 0x1b4b14: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4B10u, 0x1B4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B18u;
label_1b4b18:
    // 0x1b4b18: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4B18u;
    {
        const bool branch_taken_0x1b4b18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B18u;
        // 0x1b4b1c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b18) {
            ctx->pc = 0x1B4B38u;
            return;
        }
    }
    ctx->pc = 0x1B4B20u;
    // 0x1b4b20: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4B20u;
    SET_GPR_U32(ctx, 31, 0x1B4B28u);
    ctx->pc = 0x1B4B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4B20u;
    // 0x1b4b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4B20u, 0x1B4B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B28u;
label_1b4b28:
    // 0x1b4b28: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4B28u;
    SET_GPR_U32(ctx, 31, 0x1B4B30u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4B28u, 0x1B4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4B30u;
label_1b4b30:
    // 0x1b4b30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B4B30u;
    {
        const bool branch_taken_0x1b4b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4B30u;
        // 0x1b4b34: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4b30) {
            ctx->pc = 0x1B4B70u;
            return;
        }
    }
    ctx->pc = 0x1B4B38u;
}
