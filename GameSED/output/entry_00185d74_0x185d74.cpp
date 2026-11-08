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

// Function: entry_00185d74
// Address: 0x185d74 - 0x185d90
void entry_00185d74_0x185d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185d74_0x185d74");
#endif

    ctx->pc = 0x185d74u;

    // 0x185d74: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x185d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x185d78: 0xac670014  sw          $a3, 0x14($v1)
    ctx->pc = 0x185d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 7));
    // 0x185d7c: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x185D7Cu;
    {
        const bool branch_taken_0x185d7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x185D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D7Cu;
        // 0x185d80: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d7c) {
            ctx->pc = 0x185D00u;
            return;
        }
    }
    ctx->pc = 0x185D84u;
    // 0x185d84: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x185D84u;
    {
        const bool branch_taken_0x185d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185D84u;
        // 0x185d88: 0xa4600008  sh          $zero, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185d84) {
            ctx->pc = 0x185F90u;
            return;
        }
    }
    ctx->pc = 0x185D8Cu;
    // 0x185d8c: 0x0  nop
    ctx->pc = 0x185d8cu;
    // NOP
    ctx->pc = 0x185d90u;
}
