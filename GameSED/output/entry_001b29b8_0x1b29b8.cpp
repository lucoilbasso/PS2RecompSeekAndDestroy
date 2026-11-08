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

// Function: entry_001b29b8
// Address: 0x1b29b8 - 0x1b2a54
void entry_001b29b8_0x1b29b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b29b8_0x1b29b8");
#endif

    switch (ctx->pc) {
        case 0x1b29f8u: goto label_1b29f8;
        case 0x1b2a34u: goto label_1b2a34;
        case 0x1b2a44u: goto label_1b2a44;
        case 0x1b2a4cu: goto label_1b2a4c;
        default: break;
    }

    ctx->pc = 0x1b29b8u;

    // 0x1b29b8: 0x24c2af80  addiu       $v0, $a2, -0x5080
    ctx->pc = 0x1b29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946688));
    // 0x1b29bc: 0x3c036fff  lui         $v1, 0x6FFF
    ctx->pc = 0x1b29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28671 << 16));
    // 0x1b29c0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1b29c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b29c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b29c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b29c8: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x1b29c8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b29cc: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x1b29ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x1b29d0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1b29d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1b29d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b29d8: 0xae270010  sw          $a3, 0x10($s1)
    ctx->pc = 0x1b29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 7));
    // 0x1b29dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b29e0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1b29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1b29e4: 0x2694a6c0  addiu       $s4, $s4, -0x5940
    ctx->pc = 0x1b29e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944448));
    // 0x1b29e8: 0xae350414  sw          $s5, 0x414($s1)
    ctx->pc = 0x1b29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 21));
    // 0x1b29ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b29f0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B29F0u;
    SET_GPR_U32(ctx, 31, 0x1B29F8u);
    ctx->pc = 0x1B29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29F0u;
    // 0x1b29f4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B29F0u, 0x1B29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29F8u;
label_1b29f8:
    // 0x1b29f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b29f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29fc: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1b29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1b2a00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2a04: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1b2a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1b2a08: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1b2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1b2a0c: 0x26c4b180  addiu       $a0, $s6, -0x4E80
    ctx->pc = 0x1b2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947200));
    // 0x1b2a10: 0x27c79a80  addiu       $a3, $fp, -0x6580
    ctx->pc = 0x1b2a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
    // 0x1b2a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b2a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a20: 0x24080418  addiu       $t0, $zero, 0x418
    ctx->pc = 0x1b2a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1048));
    // 0x1b2a24: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1b2a24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2a28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2a28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2a2c: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A34u);
    ctx->pc = 0x1B2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A2Cu;
    // 0x1b2a30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B2A2Cu, 0x1B2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A34u;
label_1b2a34:
    // 0x1b2a34: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2A34u;
    {
        const bool branch_taken_0x1b2a34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A34u;
        // 0x1b2a38: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a34) {
            ctx->pc = 0x1B2A54u;
            return;
        }
    }
    ctx->pc = 0x1B2A3Cu;
    // 0x1b2a3c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B2A3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A44u);
    ctx->pc = 0x1B2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A3Cu;
    // 0x1b2a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B2A3Cu, 0x1B2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A44u;
label_1b2a44:
    // 0x1b2a44: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B2A44u;
    SET_GPR_U32(ctx, 31, 0x1B2A4Cu);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B2A44u, 0x1B2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A4Cu;
label_1b2a4c:
    // 0x1b2a4c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B2A4Cu;
    {
        const bool branch_taken_0x1b2a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A4Cu;
        // 0x1b2a50: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a4c) {
            ctx->pc = 0x1B2ADCu;
            return;
        }
    }
    ctx->pc = 0x1B2A54u;
}
