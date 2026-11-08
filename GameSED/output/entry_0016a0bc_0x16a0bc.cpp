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

// Function: entry_0016a0bc
// Address: 0x16a0bc - 0x16a0e8
void entry_0016a0bc_0x16a0bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a0bc_0x16a0bc");
#endif

    ctx->pc = 0x16a0bcu;

    // 0x16a0bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x16a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16a0c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16a0c4: 0x481fff6  bgez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16A0C4u;
    {
        const bool branch_taken_0x16a0c4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x16A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0C4u;
        // 0x16a0c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0c4) {
            ctx->pc = 0x16A0A0u;
            return;
        }
    }
    ctx->pc = 0x16A0CCu;
    // 0x16a0cc: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x16a0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a0d0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x16a0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a0d4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x16a0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x16a0d8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x16a0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a0dc: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x16a0dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x16a0e0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x16a0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a0e4: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x16a0e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    ctx->pc = 0x16a0e8u;
}
