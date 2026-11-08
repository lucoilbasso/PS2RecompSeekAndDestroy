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

// Function: entry_0014c050
// Address: 0x14c050 - 0x14c068
void entry_0014c050_0x14c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c050_0x14c050");
#endif

    ctx->pc = 0x14c050u;

    // 0x14c050: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x14c050u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x14c054: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C054u;
    {
        const bool branch_taken_0x14c054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C054u;
        // 0x14c058: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c054) {
            ctx->pc = 0x14C068u;
            return;
        }
    }
    ctx->pc = 0x14C05Cu;
    // 0x14c05c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14c060: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14C060u;
    {
        const bool branch_taken_0x14c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C060u;
        // 0x14c064: 0xc4414000  lwc1        $f1, 0x4000($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c060) {
            ctx->pc = 0x14C06Cu;
            return;
        }
    }
    ctx->pc = 0x14C068u;
}
