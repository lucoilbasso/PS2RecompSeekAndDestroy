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

// Function: entry_00110178
// Address: 0x110178 - 0x1101b0
void entry_00110178_0x110178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110178_0x110178");
#endif

    switch (ctx->pc) {
        case 0x110194u: goto label_110194;
        default: break;
    }

    ctx->pc = 0x110178u;

    // 0x110178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x110178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11017c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11017cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x110180: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x110180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x110184: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x110184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x110188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x110188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11018c: 0xc04110c  jal         func_104430
    ctx->pc = 0x11018Cu;
    SET_GPR_U32(ctx, 31, 0x110194u);
    ctx->pc = 0x110190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11018Cu;
    // 0x110190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x11018Cu, 0x110194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110194u;
label_110194:
    // 0x110194: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110198: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x110198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x11019c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x11019cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1101a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1101A0u;
    {
        const bool branch_taken_0x1101a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1101A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A0u;
        // 0x1101a4: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101a0) {
            ctx->pc = 0x1101B0u;
            return;
        }
    }
    ctx->pc = 0x1101A8u;
    // 0x1101a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1101A8u;
    {
        const bool branch_taken_0x1101a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101A8u;
        // 0x1101ac: 0x8e1001c0  lw          $s0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101a8) {
            ctx->pc = 0x1101D8u;
            return;
        }
    }
    ctx->pc = 0x1101B0u;
}
