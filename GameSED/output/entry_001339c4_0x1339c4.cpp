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

// Function: entry_001339c4
// Address: 0x1339c4 - 0x1339e0
void entry_001339c4_0x1339c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001339c4_0x1339c4");
#endif

    ctx->pc = 0x1339c4u;

    // 0x1339c4: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1339c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1339c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1339C8u;
    {
        const bool branch_taken_0x1339c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339C8u;
        // 0x1339cc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339c8) {
            ctx->pc = 0x1339E0u;
            return;
        }
    }
    ctx->pc = 0x1339D0u;
    // 0x1339d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1339d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1339d4: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x1339D4u;
    {
        const bool branch_taken_0x1339d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1339D4u;
        // 0x1339d8: 0xc4404000  lwc1        $f0, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339d4) {
            ctx->pc = 0x134090u;
            return;
        }
    }
    ctx->pc = 0x1339DCu;
    // 0x1339dc: 0x0  nop
    ctx->pc = 0x1339dcu;
    // NOP
    ctx->pc = 0x1339e0u;
}
