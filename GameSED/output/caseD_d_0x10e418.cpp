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

// Function: caseD_d
// Address: 0x10e418 - 0x10e430
void caseD_d_0x10e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x10e418");
#endif

    ctx->pc = 0x10e418u;

    // 0x10e418: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10e41c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e41cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e420: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x10e420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x10e424: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10E424u;
    {
        const bool branch_taken_0x10e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E424u;
        // 0x10e428: 0x34640080  ori         $a0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e424) {
            ctx->pc = 0x10E478u;
            return;
        }
    }
    ctx->pc = 0x10E42Cu;
    // 0x10e42c: 0x0  nop
    ctx->pc = 0x10e42cu;
    // NOP
    ctx->pc = 0x10e430u;
}
