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

// Function: entry_001d1b54
// Address: 0x1d1b54 - 0x1d1b88
void entry_001d1b54_0x1d1b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1b54_0x1d1b54");
#endif

    ctx->pc = 0x1d1b54u;

    // 0x1d1b54: 0x8fa50204  lw          $a1, 0x204($sp)
    ctx->pc = 0x1d1b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x1d1b58: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1d1b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b5c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1d1b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b60: 0x83a301d1  lb          $v1, 0x1D1($sp)
    ctx->pc = 0x1d1b60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x1d1b64: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1d1b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d1b68: 0x93a401d1  lbu         $a0, 0x1D1($sp)
    ctx->pc = 0x1d1b68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 465)));
    // 0x1d1b6c: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x1d1b6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x1d1b70: 0xafbe0208  sw          $fp, 0x208($sp)
    ctx->pc = 0x1d1b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 30));
    // 0x1d1b74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1B74u;
    {
        const bool branch_taken_0x1d1b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B74u;
        // 0x1d1b78: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b74) {
            ctx->pc = 0x1D1B88u;
            return;
        }
    }
    ctx->pc = 0x1D1B7Cu;
    // 0x1d1b7c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d1b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d1b80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1B80u;
    {
        const bool branch_taken_0x1d1b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B80u;
        // 0x1d1b84: 0xafa50208  sw          $a1, 0x208($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b80) {
            ctx->pc = 0x1D1B98u;
            return;
        }
    }
    ctx->pc = 0x1D1B88u;
}
