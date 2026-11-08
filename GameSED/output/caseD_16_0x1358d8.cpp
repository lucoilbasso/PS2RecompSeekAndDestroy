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

// Function: caseD_16
// Address: 0x1358d8 - 0x135930
void caseD_16_0x1358d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x1358d8");
#endif

    switch (ctx->pc) {
        case 0x1358e8u: goto label_1358e8;
        default: break;
    }

    ctx->pc = 0x1358d8u;

    // 0x1358d8: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x1358d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x1358dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1358dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358e0: 0xc04fe14  jal         func_13F850
    ctx->pc = 0x1358E0u;
    SET_GPR_U32(ctx, 31, 0x1358E8u);
    ctx->pc = 0x1358E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358E0u;
    // 0x1358e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F850u, 0x1358E0u, 0x1358E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1358E8u;
label_1358e8:
    // 0x1358e8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1358e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1358ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1358ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1358f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1358f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1358f4: 0x10640156  beq         $v1, $a0, . + 4 + (0x156 << 2)
    ctx->pc = 0x1358F4u;
    {
        const bool branch_taken_0x1358f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1358F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358F4u;
        // 0x1358f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1358f4) {
            ctx->pc = 0x135E50u;
            return;
        }
    }
    ctx->pc = 0x1358FCu;
    // 0x1358fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1358fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135900: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135908: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135908u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13590c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13590cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135910: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x135910u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x135914: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x135914u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135918: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x135918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13591c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13591cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x135920: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x135920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135924: 0x804ff38  j           func_13FCE0
    ctx->pc = 0x135924u;
    ctx->pc = 0x135928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135924u;
    // 0x135928: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    ApCameraZeroRate__FP7WcActor_0x13fce0(rdram, ctx, runtime); return;
    ctx->pc = 0x13592Cu;
    // 0x13592c: 0x0  nop
    ctx->pc = 0x13592cu;
    // NOP
    ctx->pc = 0x135930u;
}
