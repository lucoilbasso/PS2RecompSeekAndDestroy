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

// Function: entry_001931f8
// Address: 0x1931f8 - 0x193260
void entry_001931f8_0x1931f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001931f8_0x1931f8");
#endif

    switch (ctx->pc) {
        case 0x193254u: goto label_193254;
        default: break;
    }

    ctx->pc = 0x1931f8u;

    // 0x1931f8: 0x8fb00124  lw          $s0, 0x124($sp)
    ctx->pc = 0x1931f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x1931fc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x1931fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x193200: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x193200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x193204: 0x3c071100  lui         $a3, 0x1100
    ctx->pc = 0x193204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4352 << 16));
    // 0x193208: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x193208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19320c: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x19320cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x193210: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x193210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193214: 0x2851823  subu        $v1, $s4, $a1
    ctx->pc = 0x193214u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x193218: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x193218u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x19321c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x193220: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x193220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x193224: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x193224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x193228: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x193228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x19322c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x19322cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x193230: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x193230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x193234: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x193238: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x193238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x19323c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x193240: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x193240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x193244: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x193244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x193248: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x193248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x19324c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x19324Cu;
    SET_GPR_U32(ctx, 31, 0x193254u);
    ctx->pc = 0x193250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19324Cu;
    // 0x193250: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x19324Cu, 0x193254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193254u;
label_193254:
    // 0x193254: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x193258: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x193258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x19325c: 0x0  nop
    ctx->pc = 0x19325cu;
    // NOP
    ctx->pc = 0x193260u;
}
