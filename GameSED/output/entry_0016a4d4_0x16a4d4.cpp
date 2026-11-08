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

// Function: entry_0016a4d4
// Address: 0x16a4d4 - 0x16a520
void entry_0016a4d4_0x16a4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a4d4_0x16a4d4");
#endif

    switch (ctx->pc) {
        case 0x16a4f4u: goto label_16a4f4;
        case 0x16a514u: goto label_16a514;
        default: break;
    }

    ctx->pc = 0x16a4d4u;

label_16a4d4:
    // 0x16a4d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16a4d8:
    // 0x16a4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a4dc:
    // 0x16a4dc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16a4e0:
    // 0x16a4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a4e4:
    // 0x16a4e4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x16a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_16a4e8:
    // 0x16a4e8: 0xace20024  sw          $v0, 0x24($a3)
    ctx->pc = 0x16a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
label_16a4ec:
    // 0x16a4ec: 0xc0618da  jal         func_186368
label_16a4f0:
    if (ctx->pc == 0x16A4F0u) {
        ctx->pc = 0x16A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4ECu;
        // 0x16a4f0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A4F4u;
        goto label_16a4f4;
    }
    ctx->pc = 0x16A4ECu;
    SET_GPR_U32(ctx, 31, 0x16A4F4u);
    ctx->pc = 0x16A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A4ECu;
    // 0x16a4f0: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186368u, 0x16A4ECu, 0x16A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4F4u;
label_16a4f4:
    // 0x16a4f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16a4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16a4f8:
    // 0x16a4f8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x16a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_16a4fc:
    // 0x16a4fc: 0x24a500d0  addiu       $a1, $a1, 0xD0
    ctx->pc = 0x16a4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
label_16a500:
    // 0x16a500: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x16a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_16a504:
    // 0x16a504: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x16a504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_16a508:
    // 0x16a508: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_16a50c:
    // 0x16a50c: 0x60f809  jalr        $v1
label_16a510:
    if (ctx->pc == 0x16A510u) {
        ctx->pc = 0x16A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A50Cu;
        // 0x16a510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A514u;
        goto label_16a514;
    }
    ctx->pc = 0x16A50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16A514u);
        ctx->pc = 0x16A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A50Cu;
        // 0x16a510: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A50Cu, 0x16A514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16A514u;
label_16a514:
    // 0x16a514: 0x10000009  b           . + 4 + (0x9 << 2)
label_16a518:
    if (ctx->pc == 0x16A518u) {
        ctx->pc = 0x16A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A514u;
        // 0x16a518: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A51Cu;
        goto label_16a51c;
    }
    ctx->pc = 0x16A514u;
    {
        const bool branch_taken_0x16a514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A514u;
        // 0x16a518: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a514) {
            ctx->pc = 0x16A53Cu;
            return;
        }
    }
    ctx->pc = 0x16A51Cu;
label_16a51c:
    // 0x16a51c: 0x0  nop
    ctx->pc = 0x16a51cu;
    // NOP
    ctx->pc = 0x16a520u;
}
