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

// Function: entry_0019ae28
// Address: 0x19ae28 - 0x19ae4c
void entry_0019ae28_0x19ae28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ae28_0x19ae28");
#endif

    ctx->pc = 0x19ae28u;

    // 0x19ae28: 0x8a1024  and         $v0, $a0, $t2
    ctx->pc = 0x19ae28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x19ae2c: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x19ae2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x19ae30: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x19ae30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x19ae34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ae34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ae38: 0x2843003a  slti        $v1, $v0, 0x3A
    ctx->pc = 0x19ae38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x19ae3c: 0x24480007  addiu       $t0, $v0, 0x7
    ctx->pc = 0x19ae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x19ae40: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19AE40u;
    {
        const bool branch_taken_0x19ae40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE40u;
        // 0x19ae44: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae40) {
            ctx->pc = 0x19AE4Cu;
            return;
        }
    }
    ctx->pc = 0x19AE48u;
    // 0x19ae48: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x19ae48u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x19ae4cu;
}
