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

// Function: entry_001c2784
// Address: 0x1c2784 - 0x1c27a4
void entry_001c2784_0x1c2784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c2784_0x1c2784");
#endif

    ctx->pc = 0x1c2784u;

    // 0x1c2784: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1c2784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c2788: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C2788u;
    {
        const bool branch_taken_0x1c2788 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2788u;
        // 0x1c278c: 0xacc301ac  sw          $v1, 0x1AC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2788) {
            ctx->pc = 0x1C27A4u;
            return;
        }
    }
    ctx->pc = 0x1C2790u;
    // 0x1c2790: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1c2790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c2794: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2794u;
    {
        const bool branch_taken_0x1c2794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2794) {
            ctx->pc = 0x1C2798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2794u;
            // 0x1c2798: 0x8cc20850  lw          $v0, 0x850($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C27A8u;
            return;
        }
    }
    ctx->pc = 0x1C279Cu;
    // 0x1c279c: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x1c279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1c27a0: 0xacc201ac  sw          $v0, 0x1AC($a2)
    ctx->pc = 0x1c27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 428), GPR_U32(ctx, 2));
    ctx->pc = 0x1c27a4u;
}
