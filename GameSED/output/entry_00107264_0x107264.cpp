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

// Function: entry_00107264
// Address: 0x107264 - 0x10728c
void entry_00107264_0x107264(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107264_0x107264");
#endif

    ctx->pc = 0x107264u;

    // 0x107264: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x107264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x107268: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107268u;
    {
        const bool branch_taken_0x107268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107268u;
        // 0x10726c: 0x8c70b830  lw          $s0, -0x47D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107268) {
            ctx->pc = 0x10728Cu;
            return;
        }
    }
    ctx->pc = 0x107270u;
    // 0x107270: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x107270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x107274: 0x2450f280  addiu       $s0, $v0, -0xD80
    ctx->pc = 0x107274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
    // 0x107278: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x107278u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x25F280u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x25F280u, _value); } while (0);
    // 0x10727c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10727cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x107280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107284: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x107284u;
    SET_GPR_U32(ctx, 31, 0x10728Cu);
    ctx->pc = 0x107288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107284u;
    // 0x107288: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x107284u, 0x10728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10728Cu;
}
