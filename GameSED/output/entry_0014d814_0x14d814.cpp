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

// Function: entry_0014d814
// Address: 0x14d814 - 0x14d838
void entry_0014d814_0x14d814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d814_0x14d814");
#endif

    ctx->pc = 0x14d814u;

    // 0x14d814: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14d818: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14D818u;
    {
        const bool branch_taken_0x14d818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D818u;
        // 0x14d81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d818) {
            ctx->pc = 0x14D83Cu;
            return;
        }
    }
    ctx->pc = 0x14D820u;
    // 0x14d820: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14d824: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x14d824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x14d828: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x14d828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14d82c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x14d82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x14d830: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x14d830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x14d834: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x14d834u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14d838u;
}
