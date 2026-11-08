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

// Function: viBufEndPut
// Address: 0x1753f0 - 0x175440
void viBufEndPut_0x1753f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufEndPut_0x1753f0");
#endif

    switch (ctx->pc) {
        case 0x175410u: goto label_175410;
        default: break;
    }

    ctx->pc = 0x1753f0u;

    // 0x1753f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1753f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1753f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1753f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1753f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1753f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1753fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x175400: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x175400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175408: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x175408u;
    SET_GPR_U32(ctx, 31, 0x175410u);
    ctx->pc = 0x17540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175408u;
    // 0x17540c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x175408u, 0x175410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175410u;
label_175410:
    // 0x175410: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x175410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x175414: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x175414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x175418: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x175418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x17541c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x17541cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x175420: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x175420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x175424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x175424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175428: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x175428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x17542c: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x17542cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x175430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175438: 0x806bd20  j           func_1AF480
    ctx->pc = 0x175438u;
    ctx->pc = 0x17543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175438u;
    // 0x17543c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    SignalSema_0x1af480(rdram, ctx, runtime); return;
    ctx->pc = 0x175440u;
}
