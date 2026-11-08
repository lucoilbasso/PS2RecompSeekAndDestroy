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

// Function: entry_00143758
// Address: 0x143758 - 0x1437d0
void entry_00143758_0x143758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143758_0x143758");
#endif

    switch (ctx->pc) {
        case 0x14376cu: goto label_14376c;
        default: break;
    }

    ctx->pc = 0x143758u;

label_143758:
    // 0x143758: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x143758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x14375c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14375cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143760: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x143760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143764: 0xc05fa5c  jal         func_17E970
    ctx->pc = 0x143764u;
    SET_GPR_U32(ctx, 31, 0x14376Cu);
    ctx->pc = 0x143768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143764u;
    // 0x143768: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E970u, 0x143764u, 0x14376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14376Cu;
label_14376c:
    // 0x14376c: 0x251302b  sltu        $a2, $s2, $s1
    ctx->pc = 0x14376cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x143770: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x143770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x143774: 0x9443001c  lhu         $v1, 0x1C($v0)
    ctx->pc = 0x143774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x143778: 0xdc450038  ld          $a1, 0x38($v0)
    ctx->pc = 0x143778u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x14377c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x14377cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x143780: 0x9444001e  lhu         $a0, 0x1E($v0)
    ctx->pc = 0x143780u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 30)));
    // 0x143784: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x143784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x143788: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x143788u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14378c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14378cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x143790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143794: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x143794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x143798: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x143798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14379c: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x14379cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1437a0: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x1437a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1437a4: 0x94440030  lhu         $a0, 0x30($v0)
    ctx->pc = 0x1437a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1437a8: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1437a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1437ac: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1437acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1437b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1437b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1437b4: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x1437b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x1437b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1437b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1437bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1437bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1437c0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1437c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1437c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1437c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1437c8: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1437C8u;
    {
        const bool branch_taken_0x1437c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1437CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437C8u;
        // 0x1437cc: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437c8) {
            ctx->pc = 0x143758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143758;
        }
    }
    ctx->pc = 0x1437D0u;
}
