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

// Function: entry_0014385c
// Address: 0x14385c - 0x143888
void entry_0014385c_0x14385c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014385c_0x14385c");
#endif

    switch (ctx->pc) {
        case 0x143878u: goto label_143878;
        default: break;
    }

    ctx->pc = 0x14385cu;

label_14385c:
    // 0x14385c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x14385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_143860:
    // 0x143860: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x143860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143864:
    // 0x143864: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x143864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_143868:
    // 0x143868: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_14386c:
    // 0x14386c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14386cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_143870:
    // 0x143870: 0x60f809  jalr        $v1
label_143874:
    if (ctx->pc == 0x143874u) {
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143878u;
        goto label_143878;
    }
    ctx->pc = 0x143870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x143878u);
        ctx->pc = 0x143874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143870u;
        // 0x143874: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143870u, 0x143878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143878u;
label_143878:
    // 0x143878: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x143878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14387c:
    // 0x14387c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x14387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_143880:
    // 0x143880: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x143880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_143884:
    // 0x143884: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x143884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->pc = 0x143888u;
}
