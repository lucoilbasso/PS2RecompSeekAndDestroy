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

// Function: entry_001858c8
// Address: 0x1858c8 - 0x185900
void entry_001858c8_0x1858c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001858c8_0x1858c8");
#endif

    switch (ctx->pc) {
        case 0x1858ecu: goto label_1858ec;
        default: break;
    }

    ctx->pc = 0x1858c8u;

    // 0x1858c8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1858c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1858cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1858ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1858d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1858d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1858d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1858D4u;
    {
        const bool branch_taken_0x1858d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1858D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1858D4u;
        // 0x1858d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1858d4) {
            ctx->pc = 0x185904u;
            return;
        }
    }
    ctx->pc = 0x1858DCu;
    // 0x1858dc: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1858dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1858e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1858e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858e4: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x1858E4u;
    SET_GPR_U32(ctx, 31, 0x1858ECu);
    ctx->pc = 0x1858E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858E4u;
    // 0x1858e8: 0x24841590  addiu       $a0, $a0, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x1858E4u, 0x1858ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858ECu;
label_1858ec:
    // 0x1858ec: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x1858ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x1858f0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1858f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1858f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1858f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1858f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1858f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1858fc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x1858fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x185900u;
}
