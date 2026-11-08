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

// Function: entry_00149bcc
// Address: 0x149bcc - 0x149c38
void entry_00149bcc_0x149bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149bcc_0x149bcc");
#endif

    switch (ctx->pc) {
        case 0x149c04u: goto label_149c04;
        case 0x149c18u: goto label_149c18;
        case 0x149c34u: goto label_149c34;
        default: break;
    }

    ctx->pc = 0x149bccu;

    // 0x149bcc: 0x8c68b830  lw          $t0, -0x47D0($v1)
    ctx->pc = 0x149bccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
    // 0x149bd0: 0x24426b80  addiu       $v0, $v0, 0x6B80
    ctx->pc = 0x149bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27520));
    // 0x149bd4: 0xdc490008  ld          $t1, 0x8($v0)
    ctx->pc = 0x149bd4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x149bd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149bdc: 0xdd070000  ld          $a3, 0x0($t0)
    ctx->pc = 0x149bdcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149be0: 0x25060020  addiu       $a2, $t0, 0x20
    ctx->pc = 0x149be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x149be4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x149be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149be8: 0xfe070040  sd          $a3, 0x40($s0)
    ctx->pc = 0x149be8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 7));
    // 0x149bec: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x149becu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149bf0: 0xdd070008  ld          $a3, 0x8($t0)
    ctx->pc = 0x149bf0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x149bf4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x149bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x149bf8: 0xfe070048  sd          $a3, 0x48($s0)
    ctx->pc = 0x149bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 7));
    // 0x149bfc: 0xc067586  jal         func_19D618
    ctx->pc = 0x149BFCu;
    SET_GPR_U32(ctx, 31, 0x149C04u);
    ctx->pc = 0x149C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149BFCu;
    // 0x149c00: 0xffa90008  sd          $t1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D618u, 0x149BFCu, 0x149C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C04u;
label_149c04:
    // 0x149c04: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x149c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x149c08: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x149c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149c0c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x149c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x149c10: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x149C10u;
    SET_GPR_U32(ctx, 31, 0x149C18u);
    ctx->pc = 0x149C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C10u;
    // 0x149c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x149C10u, 0x149C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C18u;
label_149c18:
    // 0x149c18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x149c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x149c1c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x149c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x149c20: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x149c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x149c24: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x149C24u;
    {
        const bool branch_taken_0x149c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x149c24) {
            ctx->pc = 0x149C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149C24u;
            // 0x149c28: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149C38u;
            return;
        }
    }
    ctx->pc = 0x149C2Cu;
    // 0x149c2c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x149C2Cu;
    SET_GPR_U32(ctx, 31, 0x149C34u);
    ctx->pc = 0x149C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149C2Cu;
    // 0x149c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x149C2Cu, 0x149C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149C34u;
label_149c34:
    // 0x149c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149c38u;
}
