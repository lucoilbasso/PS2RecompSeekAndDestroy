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

// Function: caseD_15
// Address: 0x135880 - 0x1358d8
void caseD_15_0x135880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x135880");
#endif

    switch (ctx->pc) {
        case 0x135890u: goto label_135890;
        default: break;
    }

    ctx->pc = 0x135880u;

    // 0x135880: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
    // 0x135884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135888: 0xc050764  jal         func_141D90
    ctx->pc = 0x135888u;
    SET_GPR_U32(ctx, 31, 0x135890u);
    ctx->pc = 0x13588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135888u;
    // 0x13588c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141D90u, 0x135888u, 0x135890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135890u;
label_135890:
    // 0x135890: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x135894: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x135898: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13589c: 0x1064016c  beq         $v1, $a0, . + 4 + (0x16C << 2)
    ctx->pc = 0x13589Cu;
    {
        const bool branch_taken_0x13589c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1358A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13589Cu;
        // 0x1358a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13589c) {
            ctx->pc = 0x135E50u;
            return;
        }
    }
    ctx->pc = 0x1358A4u;
    // 0x1358a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1358a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1358a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1358ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1358acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1358b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1358b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1358b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1358b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1358b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1358b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1358bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1358bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1358c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1358c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1358c4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1358c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1358c8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1358c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1358cc: 0x804ff38  j           func_13FCE0
    ctx->pc = 0x1358CCu;
    ctx->pc = 0x1358D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1358CCu;
    // 0x1358d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    ApCameraZeroRate__FP7WcActor_0x13fce0(rdram, ctx, runtime); return;
    ctx->pc = 0x1358D4u;
    // 0x1358d4: 0x0  nop
    ctx->pc = 0x1358d4u;
    // NOP
    ctx->pc = 0x1358d8u;
}
