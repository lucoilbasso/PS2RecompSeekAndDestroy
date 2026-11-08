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

// Function: entry_00140488
// Address: 0x140488 - 0x1404b0
void entry_00140488_0x140488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140488_0x140488");
#endif

    ctx->pc = 0x140488u;

label_140488:
    // 0x140488: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x140488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14048c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x14048cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x140490: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x140490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x140494: 0x0  nop
    ctx->pc = 0x140494u;
    // NOP
    // 0x140498: 0x0  nop
    ctx->pc = 0x140498u;
    // NOP
    // 0x14049c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14049Cu;
    {
        const bool branch_taken_0x14049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1404A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14049Cu;
        // 0x1404a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14049c) {
            ctx->pc = 0x140488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140488;
        }
    }
    ctx->pc = 0x1404A4u;
    // 0x1404a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1404A4u;
    {
        const bool branch_taken_0x1404a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1404A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1404A4u;
        // 0x1404a8: 0x8e42019c  lw          $v0, 0x19C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1404a4) {
            ctx->pc = 0x140510u;
            return;
        }
    }
    ctx->pc = 0x1404ACu;
    // 0x1404ac: 0x0  nop
    ctx->pc = 0x1404acu;
    // NOP
    ctx->pc = 0x1404b0u;
}
