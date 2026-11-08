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

// Function: entry_00119308
// Address: 0x119308 - 0x119360
void entry_00119308_0x119308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119308_0x119308");
#endif

    switch (ctx->pc) {
        case 0x11934cu: goto label_11934c;
        default: break;
    }

    ctx->pc = 0x119308u;

    // 0x119308: 0x24021268  addiu       $v0, $zero, 0x1268
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x11930c: 0x240424d0  addiu       $a0, $zero, 0x24D0
    ctx->pc = 0x11930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x119310: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x119310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x119314: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x119314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x119318: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x119318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11931c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11931cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119320: 0x2463c540  addiu       $v1, $v1, -0x3AC0
    ctx->pc = 0x119320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x119324: 0xf11021  addu        $v0, $a3, $s1
    ctx->pc = 0x119324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x119328: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x119328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11932c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11932cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x119330: 0x8c900fec  lw          $s0, 0xFEC($a0)
    ctx->pc = 0x119330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4076)));
    // 0x119334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119338: 0x84430ff0  lh          $v1, 0xFF0($v0)
    ctx->pc = 0x119338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4080)));
    // 0x11933c: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11933Cu;
    {
        const bool branch_taken_0x11933c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x119340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11933Cu;
        // 0x119340: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11933c) {
            ctx->pc = 0x119360u;
            return;
        }
    }
    ctx->pc = 0x119344u;
    // 0x119344: 0xc04566c  jal         func_1159B0
    ctx->pc = 0x119344u;
    SET_GPR_U32(ctx, 31, 0x11934Cu);
    ctx->pc = 0x1159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B0u, 0x119344u, 0x11934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11934Cu;
label_11934c:
    // 0x11934c: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11934cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x119350: 0x102200  sll         $a0, $s0, 8
    ctx->pc = 0x119350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x119354: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x119354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x119358: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x119358u;
    {
        const bool branch_taken_0x119358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119358u;
        // 0x11935c: 0xac6200b0  sw          $v0, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119358) {
            ctx->pc = 0x119368u;
            return;
        }
    }
    ctx->pc = 0x119360u;
}
