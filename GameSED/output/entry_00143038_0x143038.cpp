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

// Function: entry_00143038
// Address: 0x143038 - 0x143068
void entry_00143038_0x143038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143038_0x143038");
#endif

    ctx->pc = 0x143038u;

label_143038:
    // 0x143038: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x143038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14303c: 0x80430001  lb          $v1, 0x1($v0)
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x143040: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x143044: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x143044u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143048: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x143048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x14304c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x14304cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x143050: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x143054: 0xa0652040  sb          $a1, 0x2040($v1)
    ctx->pc = 0x143054u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8256), (uint8_t)GPR_U32(ctx, 5));
    // 0x143058: 0x84e2000c  lh          $v0, 0xC($a3)
    ctx->pc = 0x143058u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x14305c: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x14305cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143060: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x143060u;
    {
        const bool branch_taken_0x143060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143060u;
        // 0x143064: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143060) {
            ctx->pc = 0x143038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143038;
        }
    }
    ctx->pc = 0x143068u;
}
