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

// Function: entry_001723a4
// Address: 0x1723a4 - 0x172448
void entry_001723a4_0x1723a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001723a4_0x1723a4");
#endif

    switch (ctx->pc) {
        case 0x1723d0u: goto label_1723d0;
        case 0x172400u: goto label_172400;
        case 0x172420u: goto label_172420;
        default: break;
    }

    ctx->pc = 0x1723a4u;

    // 0x1723a4: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x1723a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x1723a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1723a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723ac: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x1723acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
    // 0x1723b0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1723b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1723b4: 0x3c48021  addu        $s0, $fp, $a0
    ctx->pc = 0x1723b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x1723b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1723b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723bc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1723bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1723c0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1723c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1723c4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1723c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1723c8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1723C8u;
    SET_GPR_U32(ctx, 31, 0x1723D0u);
    ctx->pc = 0x1723CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723C8u;
    // 0x1723cc: 0x24e700b3  addiu       $a3, $a3, 0xB3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 179));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1723C8u, 0x1723D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1723D0u;
label_1723d0:
    // 0x1723d0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1723d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1723d4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1723d8: 0x26850130  addiu       $a1, $s4, 0x130
    ctx->pc = 0x1723d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x1723dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1723dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1723e0: 0x24e70103  addiu       $a3, $a3, 0x103
    ctx->pc = 0x1723e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 259));
    // 0x1723e4: 0x2a2182a  slt         $v1, $s5, $v0
    ctx->pc = 0x1723e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1723e8: 0x26820280  addiu       $v0, $s4, 0x280
    ctx->pc = 0x1723e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
    // 0x1723ec: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1723ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1723f0: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x1723f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x1723f4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1723f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1723f8: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1723F8u;
    SET_GPR_U32(ctx, 31, 0x172400u);
    ctx->pc = 0x1723FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1723F8u;
    // 0x1723fc: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x1723F8u, 0x172400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172400u;
label_172400:
    // 0x172400: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x172404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172408: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17240c: 0x24e700c3  addiu       $a3, $a3, 0xC3
    ctx->pc = 0x17240cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 195));
    // 0x172410: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172414: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x172414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172418: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172418u;
    SET_GPR_U32(ctx, 31, 0x172420u);
    ctx->pc = 0x17241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172418u;
    // 0x17241c: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172418u, 0x172420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172420u;
label_172420:
    // 0x172420: 0x1aa00009  blez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x172420u;
    {
        const bool branch_taken_0x172420 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x172424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172420u;
        // 0x172424: 0x2561018  mult        $v0, $s2, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172420) {
            ctx->pc = 0x172448u;
            return;
        }
    }
    ctx->pc = 0x172428u;
    // 0x172428: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x172428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x17242c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17242cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172434: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x172434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x172438: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x172438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x17243c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17243Cu;
    {
        const bool branch_taken_0x17243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17243Cu;
        // 0x172440: 0x2451fff0  addiu       $s1, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17243c) {
            ctx->pc = 0x172460u;
            return;
        }
    }
    ctx->pc = 0x172444u;
    // 0x172444: 0x0  nop
    ctx->pc = 0x172444u;
    // NOP
    ctx->pc = 0x172448u;
}
