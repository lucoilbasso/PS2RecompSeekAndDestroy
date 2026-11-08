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

// Function: entry_001a43f4
// Address: 0x1a43f4 - 0x1a440c
void entry_001a43f4_0x1a43f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a43f4_0x1a43f4");
#endif

    ctx->pc = 0x1a43f4u;

    // 0x1a43f4: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A43F4u;
    {
        const bool branch_taken_0x1a43f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a43f4) {
            ctx->pc = 0x1A43F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A43F4u;
            // 0x1a43f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4418u;
            return;
        }
    }
    ctx->pc = 0x1A43FCu;
    // 0x1a43fc: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1a43fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a4400: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a4400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1a4404: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4404u;
    {
        const bool branch_taken_0x1a4404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4404) {
            ctx->pc = 0x1A4408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4404u;
            // 0x1a4408: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4418u;
            return;
        }
    }
    ctx->pc = 0x1A440Cu;
}
