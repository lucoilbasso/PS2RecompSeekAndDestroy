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

// Function: entry_00106fd8
// Address: 0x106fd8 - 0x107008
void entry_00106fd8_0x106fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106fd8_0x106fd8");
#endif

    switch (ctx->pc) {
        case 0x106fe4u: goto label_106fe4;
        case 0x107000u: goto label_107000;
        default: break;
    }

    ctx->pc = 0x106fd8u;

label_106fd8:
    // 0x106fd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x106fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_106fdc:
    // 0x106fdc: 0xc04112e  jal         func_1044B8
label_106fe0:
    if (ctx->pc == 0x106FE0u) {
        ctx->pc = 0x106FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FDCu;
        // 0x106fe0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FE4u;
        goto label_106fe4;
    }
    ctx->pc = 0x106FDCu;
    SET_GPR_U32(ctx, 31, 0x106FE4u);
    ctx->pc = 0x106FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106FDCu;
    // 0x106fe0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x106FDCu, 0x106FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106FE4u;
label_106fe4:
    // 0x106fe4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x106fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_106fe8:
    // 0x106fe8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x106fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106fec:
    // 0x106fec: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x106fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_106ff0:
    // 0x106ff0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x106ff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_106ff4:
    // 0x106ff4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x106ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_106ff8:
    // 0x106ff8: 0x60f809  jalr        $v1
label_106ffc:
    if (ctx->pc == 0x106FFCu) {
        ctx->pc = 0x106FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FF8u;
        // 0x106ffc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107000u;
        goto label_107000;
    }
    ctx->pc = 0x106FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107000u);
        ctx->pc = 0x106FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FF8u;
        // 0x106ffc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106FF8u, 0x107000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107000u;
label_107000:
    // 0x107000: 0x10000005  b           . + 4 + (0x5 << 2)
label_107004:
    if (ctx->pc == 0x107004u) {
        ctx->pc = 0x107004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107000u;
        // 0x107004: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107008u;
        goto label_fallthrough_0x107000;
    }
    ctx->pc = 0x107000u;
    {
        const bool branch_taken_0x107000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107000u;
        // 0x107004: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107000) {
            ctx->pc = 0x107018u;
            return;
        }
    }
label_fallthrough_0x107000:
    ctx->pc = 0x107008u;
}
