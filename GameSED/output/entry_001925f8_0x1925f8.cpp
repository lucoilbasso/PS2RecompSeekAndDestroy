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

// Function: entry_001925f8
// Address: 0x1925f8 - 0x192698
void entry_001925f8_0x1925f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001925f8_0x1925f8");
#endif

    switch (ctx->pc) {
        case 0x192650u: goto label_192650;
        case 0x192684u: goto label_192684;
        case 0x19268cu: goto label_19268c;
        default: break;
    }

    ctx->pc = 0x1925f8u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x192694u;
    // 0x192694: 0x0  nop
    ctx->pc = 0x192694u;
    // NOP
    ctx->pc = 0x192698u;
}
