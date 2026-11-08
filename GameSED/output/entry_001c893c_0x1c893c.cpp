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

// Function: entry_001c893c
// Address: 0x1c893c - 0x1c8990
void entry_001c893c_0x1c893c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c893c_0x1c893c");
#endif

    ctx->pc = 0x1c893cu;

    // 0x1c893c: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1c893cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1c8940: 0x4810013  bgez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C8940u;
    {
        const bool branch_taken_0x1c8940 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8940u;
        // 0x1c8944: 0x42023  negu        $a0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8940) {
            ctx->pc = 0x1C8990u;
            return;
        }
    }
    ctx->pc = 0x1C8948u;
    // 0x1c8948: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1c8948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1c894c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c894cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1c8950: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c8950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1c8954: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c8954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c8958: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c8958u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c895c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c895cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8960: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c8960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c8964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c8964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c8968: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1c8968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1c896c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c896cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c8970: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1c8970u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1c8974: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1c8974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1c8978: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c8978u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c897c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x1c897cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1c8980: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1c8980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c8984: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c8988: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1c8988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c898c: 0xe42825  or          $a1, $a3, $a0
    ctx->pc = 0x1c898cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    ctx->pc = 0x1c8990u;
}
