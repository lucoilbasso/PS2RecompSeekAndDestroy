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

// Function: entry_001ca480
// Address: 0x1ca480 - 0x1ca4b0
void entry_001ca480_0x1ca480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca480_0x1ca480");
#endif

    ctx->pc = 0x1ca480u;

    // 0x1ca480: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ca484: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CA484u;
    {
        const bool branch_taken_0x1ca484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA484u;
        // 0x1ca488: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca484) {
            ctx->pc = 0x1CA4B0u;
            return;
        }
    }
    ctx->pc = 0x1CA48Cu;
    // 0x1ca48c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ca48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ca490: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x1ca490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x1ca494: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ca494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ca498: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA498u;
    {
        const bool branch_taken_0x1ca498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA498u;
        // 0x1ca49c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca498) {
            ctx->pc = 0x1CA508u;
            return;
        }
    }
    ctx->pc = 0x1CA4A0u;
    // 0x1ca4a0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1ca4a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA4A4u;
    {
        const bool branch_taken_0x1ca4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4A4u;
        // 0x1ca4a8: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4a4) {
            ctx->pc = 0x1CA4B4u;
            return;
        }
    }
    ctx->pc = 0x1CA4ACu;
    // 0x1ca4ac: 0x0  nop
    ctx->pc = 0x1ca4acu;
    // NOP
    ctx->pc = 0x1ca4b0u;
}
