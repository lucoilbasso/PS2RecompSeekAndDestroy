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

// Function: entry_00127708
// Address: 0x127708 - 0x127770
void entry_00127708_0x127708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127708_0x127708");
#endif

    switch (ctx->pc) {
        case 0x127764u: goto label_127764;
        default: break;
    }

    ctx->pc = 0x127708u;

    // 0x127708: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x127708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x12770c: 0x8f8389e4  lw          $v1, -0x761C($gp)
    ctx->pc = 0x12770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x127710: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x127710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x127714: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x127714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127718: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x127718u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x12771c: 0x8f9189dc  lw          $s1, -0x7624($gp)
    ctx->pc = 0x12771cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x127720: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x127720u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x127724: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x127724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x127728: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x127728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12772c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12772cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x127730: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x127730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x127734: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x127734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127738: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x127738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x12773c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12773cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x127740: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x127740u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x127744: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x127744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127748: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x127748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x12774c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x127750: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x127750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x127754: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x127754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x127758: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x127758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12775c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x12775Cu;
    SET_GPR_U32(ctx, 31, 0x127764u);
    ctx->pc = 0x127760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12775Cu;
    // 0x127760: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x12775Cu, 0x127764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127764u;
label_127764:
    // 0x127764: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x127764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x127768: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x127768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x12776c: 0x0  nop
    ctx->pc = 0x12776cu;
    // NOP
    ctx->pc = 0x127770u;
}
