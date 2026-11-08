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

// Function: entry_0010f440
// Address: 0x10f440 - 0x10f460
void entry_0010f440_0x10f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f440_0x10f440");
#endif

    ctx->pc = 0x10f440u;

    // 0x10f440: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10f444: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10f448: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x10f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10f44c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10f44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10f450: 0x5082001a  beql        $a0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10F450u;
    {
        const bool branch_taken_0x10f450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10f450) {
            ctx->pc = 0x10F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F450u;
            // 0x10f454: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F4BCu;
            return;
        }
    }
    ctx->pc = 0x10F458u;
    // 0x10f458: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x10f458u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x10f45c: 0x0  nop
    ctx->pc = 0x10f45cu;
    // NOP
    ctx->pc = 0x10f460u;
}
