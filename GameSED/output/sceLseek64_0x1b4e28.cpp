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

// Function: sceLseek64
// Address: 0x1b4e28 - 0x1b5060
void sceLseek64_0x1b4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceLseek64_0x1b4e28");
#endif

    switch (ctx->pc) {
        case 0x1b4e60u: goto label_1b4e60;
        case 0x1b4e6cu: goto label_1b4e6c;
        case 0x1b4e84u: goto label_1b4e84;
        case 0x1b4ea8u: goto label_1b4ea8;
        case 0x1b4ee8u: goto label_1b4ee8;
        case 0x1b4f14u: goto label_1b4f14;
        case 0x1b4f50u: goto label_1b4f50;
        case 0x1b4f8cu: goto label_1b4f8c;
        case 0x1b4fc8u: goto label_1b4fc8;
        case 0x1b4fd8u: goto label_1b4fd8;
        case 0x1b4fe0u: goto label_1b4fe0;
        case 0x1b4ff4u: goto label_1b4ff4;
        case 0x1b5004u: goto label_1b5004;
        case 0x1b501cu: goto label_1b501c;
        case 0x1b502cu: goto label_1b502c;
        case 0x1b5034u: goto label_1b5034;
        default: break;
    }

    ctx->pc = 0x1b4e28u;

    // 0x1b4e28: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b4e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b4e2c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b4e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b4e30: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1b4e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1b4e34: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b4e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e38: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1b4e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1b4e3c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b4e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e40: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1b4e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1b4e44: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b4e44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b4e48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1b4e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1b4e4c: 0x26b19a80  addiu       $s1, $s5, -0x6580
    ctx->pc = 0x1b4e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941312));
    // 0x1b4e50: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1b4e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1b4e54: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1b4e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1b4e58: 0xc06c81a  jal         func_1B2068
    ctx->pc = 0x1B4E58u;
    SET_GPR_U32(ctx, 31, 0x1B4E60u);
    ctx->pc = 0x1B4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E58u;
    // 0x1b4e5c: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2068u, 0x1B4E58u, 0x1B4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E60u;
label_1b4e60:
    // 0x1b4e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b4e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e64: 0xc06c92c  jal         func_1B24B0
    ctx->pc = 0x1B4E64u;
    SET_GPR_U32(ctx, 31, 0x1B4E6Cu);
    ctx->pc = 0x1B4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E64u;
    // 0x1b4e68: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24B0u, 0x1B4E64u, 0x1B4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E6Cu;
label_1b4e6c:
    // 0x1b4e6c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1b4e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1b4e70: 0x8c62aa04  lw          $v0, -0x55FC($v1)
    ctx->pc = 0x1b4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x24AA04u));
    // 0x1b4e74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4E74u;
    {
        const bool branch_taken_0x1b4e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e74) {
            ctx->pc = 0x1B4E8Cu;
            goto label_1b4e8c;
        }
    }
    ctx->pc = 0x1B4E7Cu;
    // 0x1b4e7c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4E7Cu;
    SET_GPR_U32(ctx, 31, 0x1B4E84u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4E7Cu, 0x1B4E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E84u;
label_1b4e84:
    // 0x1b4e84: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1B4E84u;
    {
        const bool branch_taken_0x1b4e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E84u;
        // 0x1b4e88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e84) {
            ctx->pc = 0x1B5038u;
            goto label_1b5038;
        }
    }
    ctx->pc = 0x1B4E8Cu;
label_1b4e8c:
    // 0x1b4e8c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4E8Cu;
    {
        const bool branch_taken_0x1b4e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e8c) {
            ctx->pc = 0x1B4EA0u;
            goto label_1b4ea0;
        }
    }
    ctx->pc = 0x1B4E94u;
    // 0x1b4e94: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1b4e94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4e98: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4E98u;
    {
        const bool branch_taken_0x1b4e98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E98u;
        // 0x1b4e9c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e98) {
            ctx->pc = 0x1B4EB0u;
            goto label_1b4eb0;
        }
    }
    ctx->pc = 0x1B4EA0u;
label_1b4ea0:
    // 0x1b4ea0: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4EA0u;
    SET_GPR_U32(ctx, 31, 0x1B4EA8u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4EA0u, 0x1B4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EA8u;
label_1b4ea8:
    // 0x1b4ea8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1B4EA8u;
    {
        const bool branch_taken_0x1b4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EA8u;
        // 0x1b4eac: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ea8) {
            ctx->pc = 0x1B5038u;
            goto label_1b5038;
        }
    }
    ctx->pc = 0x1B4EB0u;
label_1b4eb0:
    // 0x1b4eb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b4eb4: 0x2442af80  addiu       $v0, $v0, -0x5080
    ctx->pc = 0x1b4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946688));
    // 0x1b4eb8: 0xfe320010  sd          $s2, 0x10($s1)
    ctx->pc = 0x1b4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 18));
    // 0x1b4ebc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x1b4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1b4ec0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1b4ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1b4ec4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1b4ec4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1b4ec8: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x1b4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
    // 0x1b4ecc: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1b4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1b4ed0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b4ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4ed4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1b4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b4ed8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1b4ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1b4edc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b4ee0: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1B4EE0u;
    SET_GPR_U32(ctx, 31, 0x1B4EE8u);
    ctx->pc = 0x1B4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EE0u;
    // 0x1b4ee4: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1B4EE0u, 0x1B4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EE8u;
label_1b4ee8:
    // 0x1b4ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b4ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4eec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4ef0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4ef4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b4ef8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b4efc: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x1b4efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x1b4f00: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B4F00u;
    {
        const bool branch_taken_0x1b4f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F00u;
        // 0x1b4f04: 0xaeb29a80  sw          $s2, -0x6580($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294941312), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f00) {
            ctx->pc = 0x1B4F94u;
            goto label_1b4f94;
        }
    }
    ctx->pc = 0x1B4F08u;
    // 0x1b4f08: 0x3c140025  lui         $s4, 0x25
    ctx->pc = 0x1b4f08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)37 << 16));
    // 0x1b4f0c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1B4F14u);
    ctx->pc = 0x1B4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F0Cu;
    // 0x1b4f10: 0x8e84aa14  lw          $a0, -0x55EC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4F0Cu, 0x1B4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F14u;
label_1b4f14:
    // 0x1b4f14: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x1b4f14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x1b4f18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f1c: 0x8ce3a980  lw          $v1, -0x5680($a3)
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24A980u));
    // 0x1b4f20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4f24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4F24u;
    {
        const bool branch_taken_0x1b4f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F24u;
        // 0x1b4f28: 0x3c160041  lui         $s6, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f24) {
            ctx->pc = 0x1B4F48u;
            goto label_1b4f48;
        }
    }
    ctx->pc = 0x1B4F2Cu;
    // 0x1b4f2c: 0x8ea39a80  lw          $v1, -0x6580($s5)
    ctx->pc = 0x1b4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941312)));
    // 0x1b4f30: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b4f30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f34: 0x31023  negu        $v0, $v1
    ctx->pc = 0x1b4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1b4f38: 0xace3a980  sw          $v1, -0x5680($a3)
    ctx->pc = 0x1b4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294945152), GPR_U32(ctx, 3));
    // 0x1b4f3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B4F3Cu;
    {
        const bool branch_taken_0x1b4f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F3Cu;
        // 0x1b4f40: 0xaea29a80  sw          $v0, -0x6580($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294941312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f3c) {
            ctx->pc = 0x1B4F84u;
            goto label_1b4f84;
        }
    }
    ctx->pc = 0x1B4F44u;
    // 0x1b4f44: 0x0  nop
    ctx->pc = 0x1b4f44u;
    // NOP
label_1b4f48:
    // 0x1b4f48: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b4f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b4f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b4f50:
    // 0x1b4f50: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1b4f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b4f54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B4F54u;
    {
        const bool branch_taken_0x1b4f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F54u;
        // 0x1b4f58: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f54) {
            ctx->pc = 0x1B4F84u;
            goto label_1b4f84;
        }
    }
    ctx->pc = 0x1B4F5Cu;
    // 0x1b4f5c: 0x24e3a980  addiu       $v1, $a3, -0x5680
    ctx->pc = 0x1b4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945152));
    // 0x1b4f60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b4f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b4f64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b4f68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4f6c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B4F6Cu;
    {
        const bool branch_taken_0x1b4f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F6Cu;
        // 0x1b4f70: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f6c) {
            ctx->pc = 0x1B4F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4f50;
        }
    }
    ctx->pc = 0x1B4F74u;
    // 0x1b4f74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b4f78: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1b4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b4f7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1b4f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1b4f80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1b4f84:
    // 0x1b4f84: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B4F84u;
    SET_GPR_U32(ctx, 31, 0x1B4F8Cu);
    ctx->pc = 0x1B4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F84u;
    // 0x1b4f88: 0x8e84aa14  lw          $a0, -0x55EC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B4F84u, 0x1B4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F8Cu;
label_1b4f8c:
    // 0x1b4f8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4F8Cu;
    {
        const bool branch_taken_0x1b4f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F8Cu;
        // 0x1b4f90: 0x2610a6c0  addiu       $s0, $s0, -0x5940 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f8c) {
            ctx->pc = 0x1B4FA0u;
            goto label_1b4fa0;
        }
    }
    ctx->pc = 0x1B4F94u;
label_1b4f94:
    // 0x1b4f94: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b4f94u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f98: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1b4f98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1b4f9c: 0x2610a6c0  addiu       $s0, $s0, -0x5940
    ctx->pc = 0x1b4f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944448));
label_1b4fa0:
    // 0x1b4fa0: 0x26c4b180  addiu       $a0, $s6, -0x4E80
    ctx->pc = 0x1b4fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947200));
    // 0x1b4fa4: 0x26a79a80  addiu       $a3, $s5, -0x6580
    ctx->pc = 0x1b4fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941312));
    // 0x1b4fa8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b4fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b4fac: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1b4facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1b4fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b4fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fb4: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x1b4fb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b4fb8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1b4fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4fbc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4fc0: 0xc06c618  jal         func_1B1860
    ctx->pc = 0x1B4FC0u;
    SET_GPR_U32(ctx, 31, 0x1B4FC8u);
    ctx->pc = 0x1B4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FC0u;
    // 0x1b4fc4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B4FC0u, 0x1B4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FC8u;
label_1b4fc8:
    // 0x1b4fc8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4FC8u;
    {
        const bool branch_taken_0x1b4fc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FC8u;
        // 0x1b4fcc: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fc8) {
            ctx->pc = 0x1B4FE8u;
            goto label_1b4fe8;
        }
    }
    ctx->pc = 0x1B4FD0u;
    // 0x1b4fd0: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4FD0u;
    SET_GPR_U32(ctx, 31, 0x1B4FD8u);
    ctx->pc = 0x1B4FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FD0u;
    // 0x1b4fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4FD0u, 0x1B4FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FD8u;
label_1b4fd8:
    // 0x1b4fd8: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4FD8u;
    SET_GPR_U32(ctx, 31, 0x1B4FE0u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4FD8u, 0x1B4FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FE0u;
label_1b4fe0:
    // 0x1b4fe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1B4FE0u;
    {
        const bool branch_taken_0x1b4fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE0u;
        // 0x1b4fe4: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe0) {
            ctx->pc = 0x1B5038u;
            goto label_1b5038;
        }
    }
    ctx->pc = 0x1B4FE8u;
label_1b4fe8:
    // 0x1b4fe8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1b4fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1b4fec: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B4FECu;
    SET_GPR_U32(ctx, 31, 0x1B4FF4u);
    ctx->pc = 0x1B4FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FECu;
    // 0x1b4ff0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B4FECu, 0x1B4FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4FF4u;
label_1b4ff4:
    // 0x1b4ff4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4FF4u;
    {
        const bool branch_taken_0x1b4ff4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FF4u;
        // 0x1b4ff8: 0x32628000  andi        $v0, $s3, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ff4) {
            ctx->pc = 0x1B500Cu;
            goto label_1b500c;
        }
    }
    ctx->pc = 0x1B4FFCu;
    // 0x1b4ffc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4FFCu;
    SET_GPR_U32(ctx, 31, 0x1B5004u);
    ctx->pc = 0x1B5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4FFCu;
    // 0x1b5000: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4FFCu, 0x1B5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5004u;
label_1b5004:
    // 0x1b5004: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B5004u;
    {
        const bool branch_taken_0x1b5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5004u;
        // 0x1b5008: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5004) {
            ctx->pc = 0x1B5038u;
            goto label_1b5038;
        }
    }
    ctx->pc = 0x1B500Cu;
label_1b500c:
    // 0x1b500c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B500Cu;
    {
        const bool branch_taken_0x1b500c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b500c) {
            ctx->pc = 0x1B5024u;
            goto label_1b5024;
        }
    }
    ctx->pc = 0x1B5014u;
    // 0x1b5014: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5014u;
    SET_GPR_U32(ctx, 31, 0x1B501Cu);
    ctx->pc = 0x1B5018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5014u;
    // 0x1b5018: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5014u, 0x1B501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B501Cu;
label_1b501c:
    // 0x1b501c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B501Cu;
    {
        const bool branch_taken_0x1b501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B501Cu;
        // 0x1b5020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b501c) {
            ctx->pc = 0x1B5038u;
            goto label_1b5038;
        }
    }
    ctx->pc = 0x1B5024u;
label_1b5024:
    // 0x1b5024: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B5024u;
    SET_GPR_U32(ctx, 31, 0x1B502Cu);
    ctx->pc = 0x1B5028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5024u;
    // 0x1b5028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B5024u, 0x1B502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B502Cu;
label_1b502c:
    // 0x1b502c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B502Cu;
    SET_GPR_U32(ctx, 31, 0x1B5034u);
    ctx->pc = 0x1B5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B502Cu;
    // 0x1b5030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B502Cu, 0x1B5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5034u;
label_1b5034:
    // 0x1b5034: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x1b5034u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5038:
    // 0x1b5038: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1b5038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b503c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1b503cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b5040: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1b5040u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b5044: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b5044u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b5048: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1b5048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b504c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1b504cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5050: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1b5050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5054: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1b5054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5058: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5058u;
        // 0x1b505c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5060u;
}
