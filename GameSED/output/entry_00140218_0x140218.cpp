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

// Function: entry_00140218
// Address: 0x140218 - 0x140240
void entry_00140218_0x140218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140218_0x140218");
#endif

    ctx->pc = 0x140218u;

label_140218:
    // 0x140218: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x140218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14021c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14021cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x140220: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x140220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x140224: 0x0  nop
    ctx->pc = 0x140224u;
    // NOP
    // 0x140228: 0x0  nop
    ctx->pc = 0x140228u;
    // NOP
    // 0x14022c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14022Cu;
    {
        const bool branch_taken_0x14022c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14022Cu;
        // 0x140230: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14022c) {
            ctx->pc = 0x140218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140218;
        }
    }
    ctx->pc = 0x140234u;
    // 0x140234: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x140234u;
    {
        const bool branch_taken_0x140234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140234) {
            ctx->pc = 0x140260u;
            return;
        }
    }
    ctx->pc = 0x14023Cu;
    // 0x14023c: 0x0  nop
    ctx->pc = 0x14023cu;
    // NOP
    ctx->pc = 0x140240u;
}
