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

// Function: entry_001463a8
// Address: 0x1463a8 - 0x1463c0
void entry_001463a8_0x1463a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001463a8_0x1463a8");
#endif

    ctx->pc = 0x1463a8u;

    // 0x1463a8: 0x28a2e000  slti        $v0, $a1, -0x2000
    ctx->pc = 0x1463a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294959104) ? 1 : 0);
    // 0x1463ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1463ACu;
    {
        const bool branch_taken_0x1463ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463ACu;
        // 0x1463b0: 0x240218e3  addiu       $v0, $zero, 0x18E3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6371));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463ac) {
            ctx->pc = 0x1463C0u;
            return;
        }
    }
    ctx->pc = 0x1463B4u;
    // 0x1463b4: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1463b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1463b8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1463b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1463bc: 0x240218e3  addiu       $v0, $zero, 0x18E3
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6371));
    ctx->pc = 0x1463c0u;
}
