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

// Function: entry_00172318
// Address: 0x172318 - 0x1723a0
void entry_00172318_0x172318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172318_0x172318");
#endif

    switch (ctx->pc) {
        case 0x17234cu: goto label_17234c;
        case 0x17238cu: goto label_17238c;
        default: break;
    }

    ctx->pc = 0x172318u;

    // 0x172318: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x172318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x17231c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x17231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x172320: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x172320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x172324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172328: 0x3c38021  addu        $s0, $fp, $v1
    ctx->pc = 0x172328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x17232c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172330: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172334: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x172338: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x172338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17233c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x17233cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172340: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x172340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x172344: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172344u;
    SET_GPR_U32(ctx, 31, 0x17234Cu);
    ctx->pc = 0x172348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172344u;
    // 0x172348: 0x24e70063  addiu       $a3, $a3, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172344u, 0x17234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17234Cu;
label_17234c:
    // 0x17234c: 0x2561818  mult        $v1, $s2, $s6
    ctx->pc = 0x17234cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x172350: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x172350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x172354: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172358: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x172358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x17235c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x17235cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x172360: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x172360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x172364: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x172364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x172368: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x172368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x17236c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x17236cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x172370: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x172370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x172374: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x172374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x172378: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x172378u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x17237c: 0x24e70023  addiu       $a3, $a3, 0x23
    ctx->pc = 0x17237cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 35));
    // 0x172380: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x172380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x172384: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172384u;
    SET_GPR_U32(ctx, 31, 0x17238Cu);
    ctx->pc = 0x172388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172384u;
    // 0x172388: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173A60u, 0x172384u, 0x17238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17238Cu;
label_17238c:
    // 0x17238c: 0x5aa00004  blezl       $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17238Cu;
    {
        const bool branch_taken_0x17238c = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x17238c) {
            ctx->pc = 0x172390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17238Cu;
            // 0x172390: 0x26910100  addiu       $s1, $s4, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1723A0u;
            return;
        }
    }
    ctx->pc = 0x172394u;
    // 0x172394: 0x2691ffb0  addiu       $s1, $s4, -0x50
    ctx->pc = 0x172394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967216));
    // 0x172398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x172398u;
    {
        const bool branch_taken_0x172398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172398u;
        // 0x17239c: 0x26930100  addiu       $s3, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172398) {
            ctx->pc = 0x1723A4u;
            return;
        }
    }
    ctx->pc = 0x1723A0u;
}
