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

// Function: DrawFunc__7WcSheetP8WcEntity
// Address: 0x191cb8 - 0x1927d8
void DrawFunc__7WcSheetP8WcEntity_0x191cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFunc__7WcSheetP8WcEntity_0x191cb8");
#endif

    switch (ctx->pc) {
        case 0x191d40u: goto label_191d40;
        case 0x191d48u: goto label_191d48;
        case 0x191d6cu: goto label_191d6c;
        case 0x191db8u: goto label_191db8;
        case 0x191dc0u: goto label_191dc0;
        case 0x191de4u: goto label_191de4;
        case 0x191f80u: goto label_191f80;
        case 0x191fe8u: goto label_191fe8;
        case 0x192030u: goto label_192030;
        case 0x19236cu: goto label_19236c;
        case 0x1924a8u: goto label_1924a8;
        case 0x192650u: goto label_192650;
        case 0x192684u: goto label_192684;
        case 0x19268cu: goto label_19268c;
        case 0x1926a0u: goto label_1926a0;
        case 0x192714u: goto label_192714;
        case 0x192720u: goto label_192720;
        case 0x192740u: goto label_192740;
        case 0x192748u: goto label_192748;
        case 0x192770u: goto label_192770;
        default: break;
    }

    ctx->pc = 0x191cb8u;

    // 0x191cb8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x191cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x191cbc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x191cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x191cc0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x191cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x191cc4: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x191cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x191cc8: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x191cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x191ccc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x191cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191cd0: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x191cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x191cd4: 0x2456d650  addiu       $s6, $v0, -0x29B0
    ctx->pc = 0x191cd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956624));
    // 0x191cd8: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x191cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x191cdc: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x191cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ce0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x191ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x191ce4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x191ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x191ce8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x191ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x191cec: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x191cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x191cf0: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x191cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x191cf4: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x191cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x191cf8: 0x8c8201dc  lw          $v0, 0x1DC($a0)
    ctx->pc = 0x191cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x191cfc: 0x94830150  lhu         $v1, 0x150($a0)
    ctx->pc = 0x191cfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x191d00: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x191d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x191d04: 0x8ec40094  lw          $a0, 0x94($s6)
    ctx->pc = 0x191d04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x191d08: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x191d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x191d0c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x191d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x191d10: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x191d10u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x191d14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191D14u;
    {
        const bool branch_taken_0x191d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D14u;
        // 0x191d18: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d14) {
            ctx->pc = 0x191D38u;
            goto label_191d38;
        }
    }
    ctx->pc = 0x191D1Cu;
    // 0x191d1c: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x191d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x191d20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x191d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191d24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x191d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x191d28: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x191d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x191d2c: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x191d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x191d30: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x191D30u;
    {
        const bool branch_taken_0x191d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D30u;
        // 0x191d34: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d30) {
            ctx->pc = 0x191D6Cu;
            goto label_191d6c;
        }
    }
    ctx->pc = 0x191D38u;
label_191d38:
    // 0x191d38: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191D38u;
    SET_GPR_U32(ctx, 31, 0x191D40u);
    ctx->pc = 0x191D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D38u;
    // 0x191d3c: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191D38u, 0x191D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D40u;
label_191d40:
    // 0x191d40: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191D40u;
    SET_GPR_U32(ctx, 31, 0x191D48u);
    ctx->pc = 0x191D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D40u;
    // 0x191d44: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191D40u, 0x191D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D48u;
label_191d48:
    // 0x191d48: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x191d48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x191d4c: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x191d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x191d50: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x191d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x191d54: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x191d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x191d58: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x191d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x191d5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191d60: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x191d60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x191d64: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x191D64u;
    SET_GPR_U32(ctx, 31, 0x191D6Cu);
    ctx->pc = 0x191D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191D64u;
    // 0x191d68: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x191D64u, 0x191D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191D6Cu;
label_191d6c:
    // 0x191d6c: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x191d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
    // 0x191d70: 0x8fb20024  lw          $s2, 0x24($sp)
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191d74: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x191d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x191d78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x191d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191d7c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x191d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x191d80: 0x8ec30094  lw          $v1, 0x94($s6)
    ctx->pc = 0x191d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x191d84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x191d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x191D88u;
    {
        const bool branch_taken_0x191d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191D88u;
        // 0x191d8c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191d88) {
            ctx->pc = 0x191DB0u;
            goto label_191db0;
        }
    }
    ctx->pc = 0x191D90u;
    // 0x191d90: 0x8ec20098  lw          $v0, 0x98($s6)
    ctx->pc = 0x191d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
    // 0x191d94: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x191d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x191d98: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x191d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x191d9c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x191d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x191da0: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x191da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x191da4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x191DA4u;
    {
        const bool branch_taken_0x191da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191DA4u;
        // 0x191da8: 0xaec30098  sw          $v1, 0x98($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191da4) {
            ctx->pc = 0x191DE4u;
            goto label_191de4;
        }
    }
    ctx->pc = 0x191DACu;
    // 0x191dac: 0x0  nop
    ctx->pc = 0x191dacu;
    // NOP
label_191db0:
    // 0x191db0: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191DB0u;
    SET_GPR_U32(ctx, 31, 0x191DB8u);
    ctx->pc = 0x191DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DB0u;
    // 0x191db4: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191DB0u, 0x191DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DB8u;
label_191db8:
    // 0x191db8: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x191DB8u;
    SET_GPR_U32(ctx, 31, 0x191DC0u);
    ctx->pc = 0x191DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DB8u;
    // 0x191dbc: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x191DB8u, 0x191DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DC0u;
label_191dc0:
    // 0x191dc0: 0x8ed0008c  lw          $s0, 0x8C($s6)
    ctx->pc = 0x191dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x191dc4: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x191dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x191dc8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x191dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x191dcc: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x191dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x191dd0: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x191dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x191dd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x191dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x191dd8: 0xaec5008c  sw          $a1, 0x8C($s6)
    ctx->pc = 0x191dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    // 0x191ddc: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x191DDCu;
    SET_GPR_U32(ctx, 31, 0x191DE4u);
    ctx->pc = 0x191DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191DDCu;
    // 0x191de0: 0xaec20080  sw          $v0, 0x80($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x191DDCu, 0x191DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191DE4u;
label_191de4:
    // 0x191de4: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x191de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x191de8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x191de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x191dec: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x191decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x191df0: 0x240504e2  addiu       $a1, $zero, 0x4E2
    ctx->pc = 0x191df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x191df4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x191df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191df8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x191df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191dfc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x191dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191e00: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x191e00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x191e04: 0x24f00010  addiu       $s0, $a3, 0x10
    ctx->pc = 0x191e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x191e08: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x191e08u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x191e0c: 0x44a00a  movz        $s4, $v0, $a0
    ctx->pc = 0x191e0cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
    // 0x191e10: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x191e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
    // 0x191e14: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x191e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191e18: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x191e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x191e1c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x191e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191e20: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x191E20u;
    {
        const bool branch_taken_0x191e20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E20u;
        // 0x191e24: 0xdc520168  ld          $s2, 0x168($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e20) {
            ctx->pc = 0x191E30u;
            goto label_191e30;
        }
    }
    ctx->pc = 0x191E28u;
    // 0x191e28: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x191e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x191e2c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x191e2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_191e30:
    // 0x191e30: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191e34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x191e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e38: 0x24680150  addiu       $t0, $v1, 0x150
    ctx->pc = 0x191e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x191e3c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x191e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x191e40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x191e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x191e44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x191E44u;
    {
        const bool branch_taken_0x191e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E44u;
        // 0x191e48: 0x24f00020  addiu       $s0, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e44) {
            ctx->pc = 0x191E90u;
            goto label_191e90;
        }
    }
    ctx->pc = 0x191E4Cu;
    // 0x191e4c: 0x91020007  lbu         $v0, 0x7($t0)
    ctx->pc = 0x191e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x191e50: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x191e50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x191e54: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x191e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x191e58: 0x24e30030  addiu       $v1, $a3, 0x30
    ctx->pc = 0x191e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x191e5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x191e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x191e60: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x191e60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x191e64: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x191e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x191e68: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x191e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x191e6c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x191e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x191e70: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x191e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x191e74: 0x91040003  lbu         $a0, 0x3($t0)
    ctx->pc = 0x191e74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x191e78: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x191e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x191e7c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x191e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x191e80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x191e80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x191e84: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x191E84u;
    {
        const bool branch_taken_0x191e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E84u;
        // 0x191e88: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e84) {
            ctx->pc = 0x191EC0u;
            goto label_191ec0;
        }
    }
    ctx->pc = 0x191E8Cu;
    // 0x191e8c: 0x0  nop
    ctx->pc = 0x191e8cu;
    // NOP
label_191e90:
    // 0x191e90: 0x24e50030  addiu       $a1, $a3, 0x30
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x191e94: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x191e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x191e98: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x191e9c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x191e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x191ea0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x191ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x191ea4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x191ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x191ea8: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x191ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x191eac: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x191eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x191eb0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x191eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x191eb4: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x191eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x191eb8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x191eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x191ebc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x191ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_191ec0:
    // 0x191ec0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x191EC0u;
    {
        const bool branch_taken_0x191ec0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EC0u;
        // 0x191ec4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ec0) {
            ctx->pc = 0x191EDCu;
            goto label_191edc;
        }
    }
    ctx->pc = 0x191EC8u;
    // 0x191ec8: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x191ec8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x191ecc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x191eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x191ed0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x191ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x191ed4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x191ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x191ed8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x191ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_191edc:
    // 0x191edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ee0: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x191ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x191ee4: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x191ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x191ee8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x191ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x191eec: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x191eecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x191ef0: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x191ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x191ef4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x191ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191ef8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x191EF8u;
    {
        const bool branch_taken_0x191ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EF8u;
        // 0x191efc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ef8) {
            ctx->pc = 0x191F44u;
            goto label_191f44;
        }
    }
    ctx->pc = 0x191F00u;
    // 0x191f00: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x191f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191f04: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x191f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x191f08: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x191f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x191f0c: 0x94a20150  lhu         $v0, 0x150($a1)
    ctx->pc = 0x191f0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x191f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f14: 0xfca40008  sd          $a0, 0x8($a1)
    ctx->pc = 0x191f14u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 4));
    // 0x191f18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x191f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x191f1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x191f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x191f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f24: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x191f24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x191f28: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x191f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x191f2c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x191f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x191f30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x191f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x191f34: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x191f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191f38: 0xdca20160  ld          $v0, 0x160($a1)
    ctx->pc = 0x191f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 352)));
    // 0x191f3c: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x191f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x191f40: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x191f40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_191f44:
    // 0x191f44: 0x2091023  subu        $v0, $s0, $t1
    ctx->pc = 0x191f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x191f48: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x191f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x191f4c: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x191f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x191f50: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x191f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x191f54: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x191f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x191f58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x191f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x191f5c: 0xfd230008  sd          $v1, 0x8($t1)
    ctx->pc = 0x191f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 3));
    // 0x191f60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x191f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x191f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191f68: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x191f68u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x191f6c: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x191f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x191f70: 0x26a50020  addiu       $a1, $s5, 0x20
    ctx->pc = 0x191f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x191f74: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x191f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x191f78: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x191F78u;
    SET_GPR_U32(ctx, 31, 0x191F80u);
    ctx->pc = 0x191F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191F78u;
    // 0x191f7c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x191F78u, 0x191F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191F80u;
label_191f80:
    // 0x191f80: 0x26a300d0  addiu       $v1, $s5, 0xD0
    ctx->pc = 0x191f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
    // 0x191f84: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x191f84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191f88: 0xfe220240  sd          $v0, 0x240($s1)
    ctx->pc = 0x191f88u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 576), GPR_U64(ctx, 2));
    // 0x191f8c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x191f8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x191f90: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x191f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x191f94: 0xfe240248  sd          $a0, 0x248($s1)
    ctx->pc = 0x191f94u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 584), GPR_U64(ctx, 4));
    // 0x191f98: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x191f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x191f9c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x191f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191fa0: 0x8c730158  lw          $s3, 0x158($v1)
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x191fa4: 0x12600194  beqz        $s3, . + 4 + (0x194 << 2)
    ctx->pc = 0x191FA4u;
    {
        const bool branch_taken_0x191fa4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x191FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FA4u;
        // 0x191fa8: 0x141f3c  dsll32      $v1, $s4, 28 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191fa4) {
            ctx->pc = 0x1925F8u;
            goto label_1925f8;
        }
    }
    ctx->pc = 0x191FACu;
    // 0x191fac: 0x26340100  addiu       $s4, $s1, 0x100
    ctx->pc = 0x191facu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x191fb0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x191fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191fb4: 0x1223fc  dsll32      $a0, $s2, 15
    ctx->pc = 0x191fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 15));
    // 0x191fb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x191fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x191fbc: 0xafb10044  sw          $s1, 0x44($sp)
    ctx->pc = 0x191fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 17));
    // 0x191fc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x191fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x191fc4: 0x26240250  addiu       $a0, $s1, 0x250
    ctx->pc = 0x191fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 592));
    // 0x191fc8: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x191fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
    // 0x191fcc: 0x263e0140  addiu       $fp, $s1, 0x140
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x191fd0: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x191fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x191fd4: 0x26370180  addiu       $s7, $s1, 0x180
    ctx->pc = 0x191fd4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
    // 0x191fd8: 0x26350230  addiu       $s5, $s1, 0x230
    ctx->pc = 0x191fd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x191fdc: 0x26320210  addiu       $s2, $s1, 0x210
    ctx->pc = 0x191fdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    // 0x191fe0: 0x262c01f0  addiu       $t4, $s1, 0x1F0
    ctx->pc = 0x191fe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
    // 0x191fe4: 0x262b0200  addiu       $t3, $s1, 0x200
    ctx->pc = 0x191fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_191fe8:
    // 0x191fe8: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x191fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ff0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x191ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191ff4: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x191ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x191ff8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x191ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x191ffc: 0x7fab0060  sq          $t3, 0x60($sp)
    ctx->pc = 0x191ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
    // 0x192000: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x192000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192004: 0x7fac0070  sq          $t4, 0x70($sp)
    ctx->pc = 0x192004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 12));
    // 0x192008: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x192008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19200c: 0xc6210244  lwc1        $f1, 0x244($s1)
    ctx->pc = 0x19200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192010: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x192010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192014: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192018: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x192018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19201c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x19201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192020: 0xc6200248  lwc1        $f0, 0x248($s1)
    ctx->pc = 0x192020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192024: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x192024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192028: 0xc061422  jal         func_185088
    ctx->pc = 0x192028u;
    SET_GPR_U32(ctx, 31, 0x192030u);
    ctx->pc = 0x19202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192028u;
    // 0x19202c: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x192028u, 0x192030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192030u;
label_192030:
    // 0x192030: 0x262200c0  addiu       $v0, $s1, 0xC0
    ctx->pc = 0x192030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x192034: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x192034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x192038: 0x2463eb70  addiu       $v1, $v1, -0x1490
    ctx->pc = 0x192038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962032));
    // 0x19203c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x19203cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x192040: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x192040u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x192044: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x192044u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x192048: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x192048u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x19204c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x19204cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192050: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x192050u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x192054: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x192054u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x192058: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x192058u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19205c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19205cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192060: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x192060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192064: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x192064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192068: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x192068u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19206c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x19206cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192070: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x192070u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192074: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x192074u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192078: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x192078u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x19207c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x19207cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192080: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x192080u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192084: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x192084u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192088: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x192088u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x19208c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x19208cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192090: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x192090u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192094: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x192094u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192098: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x192098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x19209c: 0xfa8c0000  sqc2        $vf12, 0x0($s4)
    ctx->pc = 0x19209cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1920a0: 0xfa8d0010  sqc2        $vf13, 0x10($s4)
    ctx->pc = 0x1920a0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1920a4: 0xfa8e0020  sqc2        $vf14, 0x20($s4)
    ctx->pc = 0x1920a4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1920a8: 0xfa8f0030  sqc2        $vf15, 0x30($s4)
    ctx->pc = 0x1920a8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x1920ac: 0x4be5033d  vmr32.xyzw  $vf5, $vf0
    ctx->pc = 0x1920acu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1920b0: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1920b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1920b4: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1920b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1920b8: 0xfa850020  sqc2        $vf5, 0x20($s4)
    ctx->pc = 0x1920b8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1920bc: 0xfa860010  sqc2        $vf6, 0x10($s4)
    ctx->pc = 0x1920bcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1920c0: 0xfa870000  sqc2        $vf7, 0x0($s4)
    ctx->pc = 0x1920c0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1920c4: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1920c8: 0x2484ebf0  addiu       $a0, $a0, -0x1410
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
    // 0x1920cc: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1920ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBF0u));
    // 0x1920d0: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x1920d0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC00u));
    // 0x1920d4: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x1920d4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC10u));
    // 0x1920d8: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x1920d8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC20u));
    // 0x1920dc: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x1920dcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1920e0: 0xda890010  lqc2        $vf9, 0x10($s4)
    ctx->pc = 0x1920e0u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1920e4: 0xda8a0020  lqc2        $vf10, 0x20($s4)
    ctx->pc = 0x1920e4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1920e8: 0xda8b0030  lqc2        $vf11, 0x30($s4)
    ctx->pc = 0x1920e8u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x1920ec: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1920ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1920f0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1920f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1920f4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1920f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1920f8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1920f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1920fc: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x1920fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192100: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x192100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192104: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x192104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192108: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x192108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x19210c: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x19210cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192110: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x192110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192114: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x192114u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192118: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x192118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x19211c: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x19211cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192120: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x192120u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192124: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x192124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192128: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x192128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x19212c: 0xfbcc0000  sqc2        $vf12, 0x0($fp)
    ctx->pc = 0x19212cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x192130: 0xfbcd0010  sqc2        $vf13, 0x10($fp)
    ctx->pc = 0x192130u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x192134: 0xfbce0020  sqc2        $vf14, 0x20($fp)
    ctx->pc = 0x192134u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x192138: 0xfbcf0030  sqc2        $vf15, 0x30($fp)
    ctx->pc = 0x192138u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x19213c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x192140: 0x24a5ec30  addiu       $a1, $a1, -0x13D0
    ctx->pc = 0x192140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962224));
    // 0x192144: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x192144u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EC30u));
    // 0x192148: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x192148u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EC40u));
    // 0x19214c: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19214cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EC50u));
    // 0x192150: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x192150u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EC60u));
    // 0x192154: 0xda880000  lqc2        $vf8, 0x0($s4)
    ctx->pc = 0x192154u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x192158: 0xda890010  lqc2        $vf9, 0x10($s4)
    ctx->pc = 0x192158u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x19215c: 0xda8a0020  lqc2        $vf10, 0x20($s4)
    ctx->pc = 0x19215cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x192160: 0xda8b0030  lqc2        $vf11, 0x30($s4)
    ctx->pc = 0x192160u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x192164: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x192164u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192168: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x192168u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19216c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19216cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192170: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x192170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x192174: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x192174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192178: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x192178u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19217c: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x19217cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192180: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x192180u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x192184: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x192184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192188: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x192188u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19218c: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x19218cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192190: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x192190u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x192194: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x192194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192198: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x192198u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19219c: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x19219cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1921a0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x1921a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1921a4: 0xfaec0000  sqc2        $vf12, 0x0($s7)
    ctx->pc = 0x1921a4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1921a8: 0xfaed0010  sqc2        $vf13, 0x10($s7)
    ctx->pc = 0x1921a8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1921ac: 0xfaee0020  sqc2        $vf14, 0x20($s7)
    ctx->pc = 0x1921acu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1921b0: 0xfaef0030  sqc2        $vf15, 0x30($s7)
    ctx->pc = 0x1921b0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x1921b4: 0xfaa00000  sqc2        $vf0, 0x0($s5)
    ctx->pc = 0x1921b4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1921b8: 0xdaa80000  lqc2        $vf8, 0x0($s5)
    ctx->pc = 0x1921b8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1921bc: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1921bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1921c0: 0xdbc50010  lqc2        $vf5, 0x10($fp)
    ctx->pc = 0x1921c0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x1921c4: 0xdbc60020  lqc2        $vf6, 0x20($fp)
    ctx->pc = 0x1921c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x1921c8: 0xdbc70030  lqc2        $vf7, 0x30($fp)
    ctx->pc = 0x1921c8u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1921cc: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1921ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1921d0: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1921d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1921d4: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1921d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1921d8: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1921d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1921dc: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x1921dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1921e0: 0xdae50010  lqc2        $vf5, 0x10($s7)
    ctx->pc = 0x1921e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1921e4: 0xdae60020  lqc2        $vf6, 0x20($s7)
    ctx->pc = 0x1921e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x1921e8: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x1921e8u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1921ec: 0xdae70030  lqc2        $vf7, 0x30($s7)
    ctx->pc = 0x1921ecu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x1921f0: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x1921f0u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x1921f4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1921f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1921f8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1921f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1921fc: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1921fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192200: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x192200u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x192204: 0x4a0003bf  vwaitq
    ctx->pc = 0x192204u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192208: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x192208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x19220c: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x19220cu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x192210: 0x4a0002ff  vnop
    ctx->pc = 0x192210u;
    // NOP operation, no action needed for VU0
    // 0x192214: 0x4a0002ff  vnop
    ctx->pc = 0x192214u;
    // NOP operation, no action needed for VU0
    // 0x192218: 0x4a0002ff  vnop
    ctx->pc = 0x192218u;
    // NOP operation, no action needed for VU0
    // 0x19221c: 0x4a0002ff  vnop
    ctx->pc = 0x19221cu;
    // NOP operation, no action needed for VU0
    // 0x192220: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x192220u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x192224: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x192224u;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x192228: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x192228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19222c: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x19222cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
    // 0x192230: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x192230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x192234: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x192234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192238: 0xe6200234  swc1        $f0, 0x234($s1)
    ctx->pc = 0x192238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    // 0x19223c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x19223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x192240: 0xdaa80000  lqc2        $vf8, 0x0($s5)
    ctx->pc = 0x192240u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x192244: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x192244u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x192248: 0xdbc50010  lqc2        $vf5, 0x10($fp)
    ctx->pc = 0x192248u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x19224c: 0xdbc60020  lqc2        $vf6, 0x20($fp)
    ctx->pc = 0x19224cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x192250: 0xdbc70030  lqc2        $vf7, 0x30($fp)
    ctx->pc = 0x192250u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x192254: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x192254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192258: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x192258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19225c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19225cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192260: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x192260u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x192264: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x192264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x192268: 0xdae50010  lqc2        $vf5, 0x10($s7)
    ctx->pc = 0x192268u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x19226c: 0xdae60020  lqc2        $vf6, 0x20($s7)
    ctx->pc = 0x19226cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x192270: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x192270u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x192274: 0xdae70030  lqc2        $vf7, 0x30($s7)
    ctx->pc = 0x192274u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x192278: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x192278u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x19227c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x19227cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192280: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x192280u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192284: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x192284u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x192288: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x192288u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x19228c: 0x4a0003bf  vwaitq
    ctx->pc = 0x19228cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x192290: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x192290u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x192294: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x192294u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x192298: 0x4a0002ff  vnop
    ctx->pc = 0x192298u;
    // NOP operation, no action needed for VU0
    // 0x19229c: 0x4a0002ff  vnop
    ctx->pc = 0x19229cu;
    // NOP operation, no action needed for VU0
    // 0x1922a0: 0x4a0002ff  vnop
    ctx->pc = 0x1922a0u;
    // NOP operation, no action needed for VU0
    // 0x1922a4: 0x4a0002ff  vnop
    ctx->pc = 0x1922a4u;
    // NOP operation, no action needed for VU0
    // 0x1922a8: 0xf86c0000  sqc2        $vf12, 0x0($v1)
    ctx->pc = 0x1922a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1922ac: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x1922acu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1922b0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1922b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1922b4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1922b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1922b8: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x1922b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1922bc: 0xc6230214  lwc1        $f3, 0x214($s1)
    ctx->pc = 0x1922bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1922c0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1922c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1922c4: 0xae220298  sw          $v0, 0x298($s1)
    ctx->pc = 0x1922c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 2));
    // 0x1922c8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1922c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1922cc: 0x7bac0070  lq          $t4, 0x70($sp)
    ctx->pc = 0x1922ccu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1922d0: 0xe6210270  swc1        $f1, 0x270($s1)
    ctx->pc = 0x1922d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
    // 0x1922d4: 0xe6200278  swc1        $f0, 0x278($s1)
    ctx->pc = 0x1922d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
    // 0x1922d8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1922d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1922dc: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1922dcu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1922e0: 0xf9820000  sqc2        $vf2, 0x0($t4)
    ctx->pc = 0x1922e0u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1922e4: 0x7bab0060  lq          $t3, 0x60($sp)
    ctx->pc = 0x1922e4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1922e8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1922e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1922ec: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1922ecu;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1922f0: 0xf9620000  sqc2        $vf2, 0x0($t3)
    ctx->pc = 0x1922f0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1922f4: 0xc620021c  lwc1        $f0, 0x21C($s1)
    ctx->pc = 0x1922f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1922f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1922f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1922fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1922fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x192300: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x192300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192304: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x192304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x192308: 0x0  nop
    ctx->pc = 0x192308u;
    // NOP
    // 0x19230c: 0x0  nop
    ctx->pc = 0x19230cu;
    // NOP
    // 0x192310: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x192310u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x192314: 0x8e230294  lw          $v1, 0x294($s1)
    ctx->pc = 0x192314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    // 0x192318: 0xae2201c8  sw          $v0, 0x1C8($s1)
    ctx->pc = 0x192318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 2));
    // 0x19231c: 0xae2201cc  sw          $v0, 0x1CC($s1)
    ctx->pc = 0x19231cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 2));
    // 0x192320: 0xae240290  sw          $a0, 0x290($s1)
    ctx->pc = 0x192320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 4));
    // 0x192324: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x192324u;
    {
        const bool branch_taken_0x192324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192324u;
        // 0x192328: 0xe6210280  swc1        $f1, 0x280($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x192324) {
            ctx->pc = 0x192558u;
            goto label_192558;
        }
    }
    ctx->pc = 0x19232Cu;
    // 0x19232c: 0xc6200220  lwc1        $f0, 0x220($s1)
    ctx->pc = 0x19232cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192330: 0xc6210224  lwc1        $f1, 0x224($s1)
    ctx->pc = 0x192330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192334: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x192334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192338: 0xc6230214  lwc1        $f3, 0x214($s1)
    ctx->pc = 0x192338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19233c: 0x46001341  sub.s       $f13, $f2, $f0
    ctx->pc = 0x19233cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x192340: 0xc78485b4  lwc1        $f4, -0x7A4C($gp)
    ctx->pc = 0x192340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x192344: 0x46011b01  sub.s       $f12, $f3, $f1
    ctx->pc = 0x192344u;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x192348: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x192348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x19234c: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x19234cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x192350: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x192350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x192354: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x192354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192358: 0x45030080  bc1tl       . + 4 + (0x80 << 2)
    ctx->pc = 0x192358u;
    {
        const bool branch_taken_0x192358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192358) {
            ctx->pc = 0x19235Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192358u;
            // 0x19235c: 0x8e230290  lw          $v1, 0x290($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19255Cu;
            goto label_19255c;
        }
    }
    ctx->pc = 0x192360u;
    // 0x192360: 0x7fab0060  sq          $t3, 0x60($sp)
    ctx->pc = 0x192360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
    // 0x192364: 0xc067a02  jal         func_19E808
    ctx->pc = 0x192364u;
    SET_GPR_U32(ctx, 31, 0x19236Cu);
    ctx->pc = 0x192368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192364u;
    // 0x192368: 0x7fac0070  sq          $t4, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x192364u, 0x19236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19236Cu;
label_19236c:
    // 0x19236c: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x19236cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x192370: 0x3c052022  lui         $a1, 0x2022
    ctx->pc = 0x192370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8226 << 16));
    // 0x192374: 0x24a5f640  addiu       $a1, $a1, -0x9C0
    ctx->pc = 0x192374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    // 0x192378: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x192378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19237c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19237cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x192380: 0x24442000  addiu       $a0, $v0, 0x2000
    ctx->pc = 0x192380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x192384: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x192384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192388: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x192388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x19238c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19238cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x192390: 0xc6220270  lwc1        $f2, 0x270($s1)
    ctx->pc = 0x192390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192394: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x192394u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x192398: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x192398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19239c: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x19239cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x1923a0: 0xe6200268  swc1        $f0, 0x268($s1)
    ctx->pc = 0x1923a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 616), bits); }
    // 0x1923a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1923a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1923a8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1923a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1923ac: 0xe621026c  swc1        $f1, 0x26C($s1)
    ctx->pc = 0x1923acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    // 0x1923b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1923b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1923b4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1923b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1923b8: 0x4be5217d  vftoi4.xyzw $vf5, $vf4
    ctx->pc = 0x1923b8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1923bc: 0x48272800  qmfc2.ni    $a3, $vf5
    ctx->pc = 0x1923bcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1923c0: 0x73800  sll         $a3, $a3, 0
    ctx->pc = 0x1923c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x1923c4: 0xc6220278  lwc1        $f2, 0x278($s1)
    ctx->pc = 0x1923c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1923c8: 0xae270288  sw          $a3, 0x288($s1)
    ctx->pc = 0x1923c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 7));
    // 0x1923cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1923ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1923d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1923d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1923d4: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1923d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1923d8: 0x4be5217d  vftoi4.xyzw $vf5, $vf4
    ctx->pc = 0x1923d8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1923dc: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x1923dcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1923e0: 0x63000  sll         $a2, $a2, 0
    ctx->pc = 0x1923e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
    // 0x1923e4: 0x8e230294  lw          $v1, 0x294($s1)
    ctx->pc = 0x1923e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    // 0x1923e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1923e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1923ec: 0xae26028c  sw          $a2, 0x28C($s1)
    ctx->pc = 0x1923ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 6));
    // 0x1923f0: 0x7bab0060  lq          $t3, 0x60($sp)
    ctx->pc = 0x1923f0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1923f4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1923F4u;
    {
        const bool branch_taken_0x1923f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1923F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1923F4u;
        // 0x1923f8: 0x7bac0070  lq          $t4, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1923f4) {
            ctx->pc = 0x19242Cu;
            goto label_19242c;
        }
    }
    ctx->pc = 0x1923FCu;
    // 0x1923fc: 0x8e2201d0  lw          $v0, 0x1D0($s1)
    ctx->pc = 0x1923fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x192400: 0x8e2401d4  lw          $a0, 0x1D4($s1)
    ctx->pc = 0x192400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x192404: 0x8e2501e0  lw          $a1, 0x1E0($s1)
    ctx->pc = 0x192404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x192408: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x192408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x19240c: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x192410: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x192414: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x192414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x192418: 0xae2201d0  sw          $v0, 0x1D0($s1)
    ctx->pc = 0x192418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 2));
    // 0x19241c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x19241cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x192420: 0xae2401d4  sw          $a0, 0x1D4($s1)
    ctx->pc = 0x192420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 4));
    // 0x192424: 0xae2501e0  sw          $a1, 0x1E0($s1)
    ctx->pc = 0x192424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 5));
    // 0x192428: 0xae2301e4  sw          $v1, 0x1E4($s1)
    ctx->pc = 0x192428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 3));
label_19242c:
    // 0x19242c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x19242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x192430: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x192430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192434: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x192434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x192438: 0x8e230288  lw          $v1, 0x288($s1)
    ctx->pc = 0x192438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x19243c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19243cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192440: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x192440u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192444: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x192444u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192448: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x192448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19244c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19244cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x192450: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x192450u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x192454: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x192454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x192458: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x192458u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19245c: 0x262901d0  addiu       $t1, $s1, 0x1D0
    ctx->pc = 0x19245cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
    // 0x192460: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x192460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x192464: 0x262801c0  addiu       $t0, $s1, 0x1C0
    ctx->pc = 0x192464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    // 0x192468: 0x8e2301f4  lw          $v1, 0x1F4($s1)
    ctx->pc = 0x192468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x19246c: 0x24470170  addiu       $a3, $v0, 0x170
    ctx->pc = 0x19246cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x192470: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x192470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x192474: 0x8e240288  lw          $a0, 0x288($s1)
    ctx->pc = 0x192474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x192478: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x192478u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19247c: 0xae2301f4  sw          $v1, 0x1F4($s1)
    ctx->pc = 0x19247cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 3));
    // 0x192480: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x192480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x192484: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x192484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x192488: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x192488u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x19248c: 0x8e230204  lw          $v1, 0x204($s1)
    ctx->pc = 0x19248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 516)));
    // 0x192490: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x192494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192498: 0xae230204  sw          $v1, 0x204($s1)
    ctx->pc = 0x192498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 3));
    // 0x19249c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x19249cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x1924a0: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x1924a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1924a4: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x1924a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
label_1924a8:
    // 0x1924a8: 0x29420002  slti        $v0, $t2, 0x2
    ctx->pc = 0x1924a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1924ac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1924ACu;
    {
        const bool branch_taken_0x1924ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924ac) {
            ctx->pc = 0x1924B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1924ACu;
            // 0x1924b0: 0xc6220280  lwc1        $f2, 0x280($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1924B8u;
            goto label_1924b8;
        }
    }
    ctx->pc = 0x1924B4u;
    // 0x1924b4: 0xc6220284  lwc1        $f2, 0x284($s1)
    ctx->pc = 0x1924b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1924b8:
    // 0x1924b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1924b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1924bc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1924BCu;
    {
        const bool branch_taken_0x1924bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1924C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1924BCu;
        // 0x1924c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1924bc) {
            ctx->pc = 0x1924E4u;
            goto label_1924e4;
        }
    }
    ctx->pc = 0x1924C4u;
    // 0x1924c4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1924c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1924c8: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1924c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1924cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1924ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1924d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1924d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1924d4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1924d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1924d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1924d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1924dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1924dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1924e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1924e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1924e4:
    // 0x1924e4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1924e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1924e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1924e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1924ec: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1924ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1924f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1924f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1924f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1924f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1924f8: 0x29440002  slti        $a0, $t2, 0x2
    ctx->pc = 0x1924f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1924fc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1924fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x192500: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x192504: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x192504u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x192508: 0x29450004  slti        $a1, $t2, 0x4
    ctx->pc = 0x192508u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19250c: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x19250cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x192510: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x192510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x192514: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x192514u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x192518: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x192518u;
    {
        const bool branch_taken_0x192518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192518u;
        // 0x19251c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192518) {
            ctx->pc = 0x19252Cu;
            goto label_19252c;
        }
    }
    ctx->pc = 0x192520u;
    // 0x192520: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x192520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x192524: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x192524u;
    {
        const bool branch_taken_0x192524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192524) {
            ctx->pc = 0x192528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192524u;
            // 0x192528: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19253Cu;
            goto label_19253c;
        }
    }
    ctx->pc = 0x19252Cu;
label_19252c:
    // 0x19252c: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x19252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    // 0x192530: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x192530u;
    {
        const bool branch_taken_0x192530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192530) {
            ctx->pc = 0x192534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192530u;
            // 0x192534: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192548u;
            goto label_192548;
        }
    }
    ctx->pc = 0x192538u;
    // 0x192538: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x192538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19253c:
    // 0x19253c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19253cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x192540: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x192540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x192544: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x192544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_192548:
    // 0x192548: 0x14a0ffd7  bnez        $a1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x192548u;
    {
        const bool branch_taken_0x192548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192548u;
        // 0x19254c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192548) {
            ctx->pc = 0x1924A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1924a8;
        }
    }
    ctx->pc = 0x192550u;
    // 0x192550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x192550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192554: 0xae220290  sw          $v0, 0x290($s1)
    ctx->pc = 0x192554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 2));
label_192558:
    // 0x192558: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x192558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
label_19255c:
    // 0x19255c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192560: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x192560u;
    {
        const bool branch_taken_0x192560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x192564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192560u;
        // 0x192564: 0x262201d0  addiu       $v0, $s1, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192560) {
            ctx->pc = 0x192590u;
            goto label_192590;
        }
    }
    ctx->pc = 0x192568u;
    // 0x192568: 0xde2201f0  ld          $v0, 0x1F0($s1)
    ctx->pc = 0x192568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x19256c: 0xde2301f8  ld          $v1, 0x1F8($s1)
    ctx->pc = 0x19256cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 504)));
    // 0x192570: 0xde240200  ld          $a0, 0x200($s1)
    ctx->pc = 0x192570u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x192574: 0xde250208  ld          $a1, 0x208($s1)
    ctx->pc = 0x192574u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 520)));
    // 0x192578: 0xfe2201d0  sd          $v0, 0x1D0($s1)
    ctx->pc = 0x192578u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 2));
    // 0x19257c: 0xfe2301d8  sd          $v1, 0x1D8($s1)
    ctx->pc = 0x19257cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 3));
    // 0x192580: 0xfe2401e0  sd          $a0, 0x1E0($s1)
    ctx->pc = 0x192580u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 480), GPR_U64(ctx, 4));
    // 0x192584: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x192584u;
    {
        const bool branch_taken_0x192584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192584u;
        // 0x192588: 0xfe2501e8  sd          $a1, 0x1E8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 488), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192584) {
            ctx->pc = 0x1925ACu;
            goto label_1925ac;
        }
    }
    ctx->pc = 0x19258Cu;
    // 0x19258c: 0x0  nop
    ctx->pc = 0x19258cu;
    // NOP
label_192590:
    // 0x192590: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x192590u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x192594: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x192594u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x192598: 0xf8420000  sqc2        $vf2, 0x0($v0)
    ctx->pc = 0x192598u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19259c: 0x262301e0  addiu       $v1, $s1, 0x1E0
    ctx->pc = 0x19259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    // 0x1925a0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1925a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1925a4: 0x4be2117d  vftoi4.xyzw $vf2, $vf2
    ctx->pc = 0x1925a4u;
    { __m128 src = ctx->vu0_vf[2]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1925a8: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1925a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1925ac:
    // 0x1925ac: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x1925acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1925b0: 0xde220210  ld          $v0, 0x210($s1)
    ctx->pc = 0x1925b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x1925b4: 0xde230218  ld          $v1, 0x218($s1)
    ctx->pc = 0x1925b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 536)));
    // 0x1925b8: 0xfe220220  sd          $v0, 0x220($s1)
    ctx->pc = 0x1925b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 544), GPR_U64(ctx, 2));
    // 0x1925bc: 0xfe230228  sd          $v1, 0x228($s1)
    ctx->pc = 0x1925bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 552), GPR_U64(ctx, 3));
    // 0x1925c0: 0xae2401c0  sw          $a0, 0x1C0($s1)
    ctx->pc = 0x1925c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 4));
    // 0x1925c4: 0xae2401c4  sw          $a0, 0x1C4($s1)
    ctx->pc = 0x1925c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 4));
    // 0x1925c8: 0xc6200270  lwc1        $f0, 0x270($s1)
    ctx->pc = 0x1925c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1925cc: 0xc6210278  lwc1        $f1, 0x278($s1)
    ctx->pc = 0x1925ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1925d0: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x1925d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x1925d4: 0xc6220280  lwc1        $f2, 0x280($s1)
    ctx->pc = 0x1925d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1925d8: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x1925d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x1925dc: 0x8e73001c  lw          $s3, 0x1C($s3)
    ctx->pc = 0x1925dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1925e0: 0xe6200274  swc1        $f0, 0x274($s1)
    ctx->pc = 0x1925e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    // 0x1925e4: 0xe621027c  swc1        $f1, 0x27C($s1)
    ctx->pc = 0x1925e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 636), bits); }
    // 0x1925e8: 0xae22029c  sw          $v0, 0x29C($s1)
    ctx->pc = 0x1925e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 2));
    // 0x1925ec: 0xe6220284  swc1        $f2, 0x284($s1)
    ctx->pc = 0x1925ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    // 0x1925f0: 0x1660fe7d  bnez        $s3, . + 4 + (-0x183 << 2)
    ctx->pc = 0x1925F0u;
    {
        const bool branch_taken_0x1925f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1925F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1925F0u;
        // 0x1925f4: 0xae230294  sw          $v1, 0x294($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1925f0) {
            ctx->pc = 0x191FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191fe8;
        }
    }
    ctx->pc = 0x1925F8u;
label_1925f8:
    // 0x1925f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1925f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1925fc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1925fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x192600: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x192600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x192604: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x192604u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x192608: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x192608u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x19260c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19260cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x192610: 0x2041023  subu        $v0, $s0, $a0
    ctx->pc = 0x192610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x192614: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x192614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192618: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x192618u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x19261c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x19261cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x192620: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x192620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x192624: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x192624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x192628: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x192628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19262c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x19262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x192630: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x192630u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x192634: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x192634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x192638: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x192638u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x19263c: 0x8ec30094  lw          $v1, 0x94($s6)
    ctx->pc = 0x19263cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x192640: 0x54600015  bnel        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x192640u;
    {
        const bool branch_taken_0x192640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x192640) {
            ctx->pc = 0x192644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x192640u;
            // 0x192644: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x192698u;
            goto label_192698;
        }
    }
    ctx->pc = 0x192648u;
    // 0x192648: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x192648u;
    SET_GPR_U32(ctx, 31, 0x192650u);
    ctx->pc = 0x19264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192648u;
    // 0x19264c: 0x8ec40088  lw          $a0, 0x88($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x192648u, 0x192650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192650u;
label_192650:
    // 0x192650: 0x8ec3008c  lw          $v1, 0x8C($s6)
    ctx->pc = 0x192650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 140)));
    // 0x192654: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x192654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x192658: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x192658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x19265c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x19265cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x192660: 0x8ec50080  lw          $a1, 0x80($s6)
    ctx->pc = 0x192660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x192664: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x192664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x192668: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x192668u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x19266c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x19266cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x192670: 0x8ec40088  lw          $a0, 0x88($s6)
    ctx->pc = 0x192670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 136)));
    // 0x192674: 0xaec50080  sw          $a1, 0x80($s6)
    ctx->pc = 0x192674u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 128), GPR_U32(ctx, 5));
    // 0x192678: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x192678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x19267c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x19267Cu;
    SET_GPR_U32(ctx, 31, 0x192684u);
    ctx->pc = 0x192680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19267Cu;
    // 0x192680: 0xaec5008c  sw          $a1, 0x8C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 140), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x19267Cu, 0x192684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192684u;
label_192684:
    // 0x192684: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x192684u;
    SET_GPR_U32(ctx, 31, 0x19268Cu);
    ctx->pc = 0x192688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192684u;
    // 0x192688: 0x8ec40084  lw          $a0, 0x84($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x192684u, 0x19268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19268Cu;
label_19268c:
    // 0x19268c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19268Cu;
    {
        const bool branch_taken_0x19268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19268Cu;
        // 0x192690: 0x8fb10030  lw          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19268c) {
            ctx->pc = 0x1926BCu;
            goto label_1926bc;
        }
    }
    ctx->pc = 0x192694u;
    // 0x192694: 0x0  nop
    ctx->pc = 0x192694u;
    // NOP
label_192698:
    // 0x192698: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x192698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x19269c: 0x0  nop
    ctx->pc = 0x19269cu;
    // NOP
label_1926a0:
    // 0x1926a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1926a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1926a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1926a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1926a8: 0x0  nop
    ctx->pc = 0x1926a8u;
    // NOP
    // 0x1926ac: 0x0  nop
    ctx->pc = 0x1926acu;
    // NOP
    // 0x1926b0: 0x0  nop
    ctx->pc = 0x1926b0u;
    // NOP
    // 0x1926b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1926B4u;
    {
        const bool branch_taken_0x1926b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1926B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926B4u;
        // 0x1926b8: 0x8fb10030  lw          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926b4) {
            ctx->pc = 0x1926A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1926a0;
        }
    }
    ctx->pc = 0x1926BCu;
label_1926bc:
    // 0x1926bc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1926bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x1926c0: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x1926c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x1926c4: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x1926c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x1926c8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1926c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1926cc: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x1926ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x1926d0: 0x2051823  subu        $v1, $s0, $a1
    ctx->pc = 0x1926d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1926d4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1926d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926d8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1926d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1926dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1926dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1926e0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1926e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1926e4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x1926e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1926e8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1926e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1926ec: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1926ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1926f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1926f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1926f4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1926f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1926f8: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x1926f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x1926fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1926fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x192700: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x192700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x192704: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x192704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x192708: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x192708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x19270c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19270Cu;
    SET_GPR_U32(ctx, 31, 0x192714u);
    ctx->pc = 0x192710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19270Cu;
    // 0x192710: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19270Cu, 0x192714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192714u;
label_192714:
    // 0x192714: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x192714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x192718: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x192718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x19271c: 0x0  nop
    ctx->pc = 0x19271cu;
    // NOP
label_192720:
    // 0x192720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x192720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x192724: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x192724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x192728: 0x0  nop
    ctx->pc = 0x192728u;
    // NOP
    // 0x19272c: 0x0  nop
    ctx->pc = 0x19272cu;
    // NOP
    // 0x192730: 0x0  nop
    ctx->pc = 0x192730u;
    // NOP
    // 0x192734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x192734u;
    {
        const bool branch_taken_0x192734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x192734) {
            ctx->pc = 0x192720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192720;
        }
    }
    ctx->pc = 0x19273Cu;
    // 0x19273c: 0x0  nop
    ctx->pc = 0x19273cu;
    // NOP
label_192740:
    // 0x192740: 0xc06bd2c  jal         func_1AF4B0
    ctx->pc = 0x192740u;
    SET_GPR_U32(ctx, 31, 0x192748u);
    ctx->pc = 0x192744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192740u;
    // 0x192744: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x192740u, 0x192748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192748u;
label_192748:
    // 0x192748: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x192748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    // 0x19274c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19274Cu;
    {
        const bool branch_taken_0x19274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x192750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19274Cu;
        // 0x192750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19274c) {
            ctx->pc = 0x192740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192740;
        }
    }
    ctx->pc = 0x192754u;
    // 0x192754: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x192754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x192758: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x192758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19275c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19275Cu;
    {
        const bool branch_taken_0x19275c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x192760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19275Cu;
        // 0x192760: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19275c) {
            ctx->pc = 0x192770u;
            goto label_192770;
        }
    }
    ctx->pc = 0x192764u;
    // 0x192764: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x192764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x192768: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x192768u;
    SET_GPR_U32(ctx, 31, 0x192770u);
    ctx->pc = 0x19276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192768u;
    // 0x19276c: 0xae110090  sw          $s1, 0x90($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x192768u, 0x192770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192770u;
label_192770:
    // 0x192770: 0x8f848c50  lw          $a0, -0x73B0($gp)
    ctx->pc = 0x192770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x192774: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x192774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x192778: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x192778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x19277c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x192780: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x192780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192784: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x192784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x192788: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x192788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x19278c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x19278cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192790: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x192790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x192794: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x192794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x192798: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x192798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19279c: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x19279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x1927a0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1927a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1927a4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1927a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1927a8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1927a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1927ac: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1927acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1927b0: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1927b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1927b4: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1927b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1927b8: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1927b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1927bc: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1927bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1927c0: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1927c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1927c4: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1927c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1927c8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1927c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1927cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1927ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1927d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1927D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1927D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927D0u;
        // 0x1927d4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1927D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1927D8u;
}
