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

// Function: entry_00153f88
// Address: 0x153f88 - 0x153fa0
void entry_00153f88_0x153f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153f88_0x153f88");
#endif

    ctx->pc = 0x153f88u;

    // 0x153f88: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x153f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x153f8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x153F8Cu;
    {
        const bool branch_taken_0x153f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F8Cu;
        // 0x153f90: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f8c) {
            ctx->pc = 0x153FA0u;
            return;
        }
    }
    ctx->pc = 0x153F94u;
    // 0x153f94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x153f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x153f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x153F98u;
    {
        const bool branch_taken_0x153f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F98u;
        // 0x153f9c: 0xc4424000  lwc1        $f2, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f98) {
            ctx->pc = 0x153FA4u;
            return;
        }
    }
    ctx->pc = 0x153FA0u;
}
