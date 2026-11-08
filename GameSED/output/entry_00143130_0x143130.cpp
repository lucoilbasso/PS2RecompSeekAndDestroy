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

// Function: entry_00143130
// Address: 0x143130 - 0x143160
void entry_00143130_0x143130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143130_0x143130");
#endif

    ctx->pc = 0x143130u;

label_143130:
    // 0x143130: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x143130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143134: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x143134u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x143138: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x143138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x14313c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x14313cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143140: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x143140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x143144: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x143144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x143148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x143148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14314c: 0xa0652040  sb          $a1, 0x2040($v1)
    ctx->pc = 0x14314cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8256), (uint8_t)GPR_U32(ctx, 5));
    // 0x143150: 0x84c2000c  lh          $v0, 0xC($a2)
    ctx->pc = 0x143150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x143154: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x143154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143158: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x143158u;
    {
        const bool branch_taken_0x143158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143158u;
        // 0x14315c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143158) {
            ctx->pc = 0x143130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143130;
        }
    }
    ctx->pc = 0x143160u;
}
