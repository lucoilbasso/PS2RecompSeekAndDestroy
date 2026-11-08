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

// Function: entry_00160498
// Address: 0x160498 - 0x1604b8
void entry_00160498_0x160498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160498_0x160498");
#endif

    ctx->pc = 0x160498u;

    // 0x160498: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x160498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16049c: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16049Cu;
    {
        const bool branch_taken_0x16049c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1604A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16049Cu;
        // 0x1604a0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16049c) {
            ctx->pc = 0x1604B8u;
            return;
        }
    }
    ctx->pc = 0x1604A4u;
    // 0x1604a4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1604a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1604a8: 0xaf858b38  sw          $a1, -0x74C8($gp)
    ctx->pc = 0x1604a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937400), GPR_U32(ctx, 5));
    // 0x1604ac: 0x10000162  b           . + 4 + (0x162 << 2)
    ctx->pc = 0x1604ACu;
    {
        const bool branch_taken_0x1604ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1604B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1604ACu;
        // 0x1604b0: 0xa452a294  sh          $s2, -0x5D6C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294943380), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1604ac) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x1604B4u;
    // 0x1604b4: 0x0  nop
    ctx->pc = 0x1604b4u;
    // NOP
    ctx->pc = 0x1604b8u;
}
