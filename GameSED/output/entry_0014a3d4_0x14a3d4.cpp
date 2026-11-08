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

// Function: entry_0014a3d4
// Address: 0x14a3d4 - 0x14a408
void entry_0014a3d4_0x14a3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a3d4_0x14a3d4");
#endif

    ctx->pc = 0x14a3d4u;

    // 0x14a3d4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14a3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14a3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14a3dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x14a3dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14a3e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x14a3e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a3e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14a3ec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x14a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x14a3f0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x14a3f4: 0xfa400000  sqc2        $vf0, 0x0($s2)
    ctx->pc = 0x14a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14a3f8: 0x8e02fff0  lw          $v0, -0x10($s0)
    ctx->pc = 0x14a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x14a3fc: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x14A3FCu;
    {
        const bool branch_taken_0x14a3fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3FCu;
        // 0x14a400: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a3fc) {
            ctx->pc = 0x14A4FCu;
            return;
        }
    }
    ctx->pc = 0x14A404u;
    // 0x14a404: 0x3c160020  lui         $s6, 0x20
    ctx->pc = 0x14a404u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32 << 16));
    ctx->pc = 0x14a408u;
}
