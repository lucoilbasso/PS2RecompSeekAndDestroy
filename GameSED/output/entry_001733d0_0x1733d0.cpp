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

// Function: entry_001733d0
// Address: 0x1733d0 - 0x1734c0
void entry_001733d0_0x1733d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001733d0_0x1733d0");
#endif

    switch (ctx->pc) {
        case 0x173420u: goto label_173420;
        default: break;
    }

    ctx->pc = 0x1733d0u;

label_1733d0:
    // 0x1733d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1733d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1733d4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1733d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1733d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1733d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1733dc: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x1733dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1733e0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1733e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1733e4: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1733e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1733e8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1733e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1733ec: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1733ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1733f0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1733f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1733f4: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x1733f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1733f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1733f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1733fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1733fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173400: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x173400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x173404: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x173404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17340c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17340cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173410: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x173410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173414: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x173414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x173418: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x173418u;
    SET_GPR_U32(ctx, 31, 0x173420u);
    ctx->pc = 0x17341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173418u;
    // 0x17341c: 0x24060072  addiu       $a2, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x173418u, 0x173420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173420u;
label_173420:
    // 0x173420: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x173420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x173424: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x173424u;
    {
        const bool branch_taken_0x173424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173424u;
        // 0x173428: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173424) {
            ctx->pc = 0x1733D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1733d0;
        }
    }
    ctx->pc = 0x17342Cu;
    // 0x17342c: 0x16c00024  bnez        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x17342Cu;
    {
        const bool branch_taken_0x17342c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x173430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17342Cu;
        // 0x173430: 0x8fa5009c  lw          $a1, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17342c) {
            ctx->pc = 0x1734C0u;
            return;
        }
    }
    ctx->pc = 0x173434u;
    // 0x173434: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x173434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173438: 0x2771021  addu        $v0, $s3, $s7
    ctx->pc = 0x173438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
    // 0x17343c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17343cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173440: 0xd54018  mult        $t0, $a2, $s5
    ctx->pc = 0x173440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x173444: 0x2d2302a  slt         $a2, $s6, $s2
    ctx->pc = 0x173444u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x173448: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x173448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17344c: 0x24a700e3  addiu       $a3, $a1, 0xE3
    ctx->pc = 0x17344cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 227));
    // 0x173450: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x173450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x173454: 0x24a500d3  addiu       $a1, $a1, 0xD3
    ctx->pc = 0x173454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 211));
    // 0x173458: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x173458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17345c: 0x1122021  addu        $a0, $t0, $s2
    ctx->pc = 0x17345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x173460: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x173460u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x173464: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x173464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x173468: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x173468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x17346c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173470: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x173470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x173474: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x173474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x173478: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x173478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x17347c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x17347cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x173480: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x173480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x173484: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x173484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x173488: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x173488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x17348c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x17348cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x173490: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x173490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x173494: 0x16400022  bnez        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x173494u;
    {
        const bool branch_taken_0x173494 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x173498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173494u;
        // 0x173498: 0xafbe0054  sw          $fp, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173494) {
            ctx->pc = 0x173520u;
            return;
        }
    }
    ctx->pc = 0x17349Cu;
    // 0x17349c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x17349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1734a0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1734a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1734a4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1734a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1734a8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1734a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1734ac: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1734acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1734b0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1734b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1734b4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1734B4u;
    {
        const bool branch_taken_0x1734b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1734B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1734B4u;
        // 0x1734b8: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1734b4) {
            ctx->pc = 0x17351Cu;
            return;
        }
    }
    ctx->pc = 0x1734BCu;
    // 0x1734bc: 0x0  nop
    ctx->pc = 0x1734bcu;
    // NOP
    ctx->pc = 0x1734c0u;
}
