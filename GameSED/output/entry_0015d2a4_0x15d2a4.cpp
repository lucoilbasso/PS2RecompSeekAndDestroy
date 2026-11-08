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

// Function: entry_0015d2a4
// Address: 0x15d2a4 - 0x15d330
void entry_0015d2a4_0x15d2a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d2a4_0x15d2a4");
#endif

    switch (ctx->pc) {
        case 0x15d2d0u: goto label_15d2d0;
        case 0x15d2ecu: goto label_15d2ec;
        default: break;
    }

    ctx->pc = 0x15d2a4u;

label_15d2a4:
    // 0x15d2a4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15d2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d2a8:
    // 0x15d2a8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x15d2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_15d2ac:
    // 0x15d2ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15d2b0:
    // 0x15d2b0: 0x34a53333  ori         $a1, $a1, 0x3333
    ctx->pc = 0x15d2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13107);
label_15d2b4:
    // 0x15d2b4: 0xaeb00168  sw          $s0, 0x168($s5)
    ctx->pc = 0x15d2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 360), GPR_U32(ctx, 16));
label_15d2b8:
    // 0x15d2b8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15d2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15d2bc:
    // 0x15d2bc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x15d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_15d2c0:
    // 0x15d2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d2c4:
    // 0x15d2c4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x15d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_15d2c8:
    // 0x15d2c8: 0xc061372  jal         func_184DC8
label_15d2cc:
    if (ctx->pc == 0x15D2CCu) {
        ctx->pc = 0x15D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2C8u;
        // 0x15d2cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2D0u;
        goto label_15d2d0;
    }
    ctx->pc = 0x15D2C8u;
    SET_GPR_U32(ctx, 31, 0x15D2D0u);
    ctx->pc = 0x15D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2C8u;
    // 0x15d2cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184DC8u, 0x15D2C8u, 0x15D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2D0u;
label_15d2d0:
    // 0x15d2d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d2d4:
    // 0x15d2d4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x15d2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_15d2d8:
    // 0x15d2d8: 0x24420088  addiu       $v0, $v0, 0x88
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
label_15d2dc:
    // 0x15d2dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d2dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d2e0:
    // 0x15d2e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d2e4:
    // 0x15d2e4: 0x60f809  jalr        $v1
label_15d2e8:
    if (ctx->pc == 0x15D2E8u) {
        ctx->pc = 0x15D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2E4u;
        // 0x15d2e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2ECu;
        goto label_15d2ec;
    }
    ctx->pc = 0x15D2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D2ECu);
        ctx->pc = 0x15D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2E4u;
        // 0x15d2e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D2E4u, 0x15D2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D2ECu;
label_15d2ec:
    // 0x15d2ec: 0x96a20016  lhu         $v0, 0x16($s5)
    ctx->pc = 0x15d2ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 22)));
label_15d2f0:
    // 0x15d2f0: 0x8ea30164  lw          $v1, 0x164($s5)
    ctx->pc = 0x15d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
label_15d2f4:
    // 0x15d2f4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x15d2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_15d2f8:
    // 0x15d2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15d2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d2fc:
    // 0x15d2fc: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x15d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_15d300:
    // 0x15d300: 0xaea30160  sw          $v1, 0x160($s5)
    ctx->pc = 0x15d300u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 352), GPR_U32(ctx, 3));
label_15d304:
    // 0x15d304: 0xa6a20016  sh          $v0, 0x16($s5)
    ctx->pc = 0x15d304u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 22), (uint16_t)GPR_U32(ctx, 2));
label_15d308:
    // 0x15d308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15d308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15d30c:
    // 0x15d30c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15d30cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15d310:
    // 0x15d310: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15d310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15d314:
    // 0x15d314: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15d314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15d318:
    // 0x15d318: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15d318u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15d31c:
    // 0x15d31c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15d31cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15d320:
    // 0x15d320: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x15d320u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15d324:
    // 0x15d324: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15d324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15d328:
    // 0x15d328: 0x3e00008  jr          $ra
label_15d32c:
    if (ctx->pc == 0x15D32Cu) {
        ctx->pc = 0x15D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D328u;
        // 0x15d32c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D330u;
        goto label_fallthrough_0x15d328;
    }
    ctx->pc = 0x15D328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D328u;
        // 0x15d32c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d328:
    ctx->pc = 0x15D330u;
}
