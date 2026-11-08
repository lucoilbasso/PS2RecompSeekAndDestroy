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

// Function: entry_0010994c
// Address: 0x10994c - 0x109968
void entry_0010994c_0x10994c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010994c_0x10994c");
#endif

    ctx->pc = 0x10994cu;

    // 0x10994c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x109950: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x109950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x109954: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x109954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x109958: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10995c: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10995Cu;
    {
        const bool branch_taken_0x10995c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x10995c) {
            ctx->pc = 0x109960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10995Cu;
            // 0x109960: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1099B8u;
            return;
        }
    }
    ctx->pc = 0x109964u;
    // 0x109964: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x109964u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    ctx->pc = 0x109968u;
}
