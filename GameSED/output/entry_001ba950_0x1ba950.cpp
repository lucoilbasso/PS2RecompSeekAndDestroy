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

// Function: entry_001ba950
// Address: 0x1ba950 - 0x1ba988
void entry_001ba950_0x1ba950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba950_0x1ba950");
#endif

    switch (ctx->pc) {
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba974u: goto label_1ba974;
        default: break;
    }

    ctx->pc = 0x1ba950u;

    // 0x1ba950: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1ba950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1ba954: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1ba954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1ba958: 0x8c44d690  lw          $a0, -0x2970($v0)
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x40D690u));
    // 0x1ba95c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1ba95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1ba960: 0xac71c098  sw          $s1, -0x3F68($v1)
    ctx->pc = 0x1ba960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x24C098u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C098u, _value); } while (0);
    // 0x1ba964: 0xc06bcd8  jal         func_1AF360
    ctx->pc = 0x1BA964u;
    SET_GPR_U32(ctx, 31, 0x1BA96Cu);
    ctx->pc = 0x1BA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA964u;
    // 0x1ba968: 0x24a5d698  addiu       $a1, $a1, -0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF360u, 0x1BA964u, 0x1BA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA96Cu;
label_1ba96c:
    // 0x1ba96c: 0xc06ea20  jal         func_1BA880
    ctx->pc = 0x1BA96Cu;
    SET_GPR_U32(ctx, 31, 0x1BA974u);
    ctx->pc = 0x1BA970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA96Cu;
    // 0x1ba970: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA880u, 0x1BA96Cu, 0x1BA974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA974u;
label_1ba974:
    // 0x1ba974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA974u;
    {
        const bool branch_taken_0x1ba974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA974u;
        // 0x1ba978: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba974) {
            ctx->pc = 0x1BA990u;
            return;
        }
    }
    ctx->pc = 0x1BA97Cu;
    // 0x1ba97c: 0x8e04c0ac  lw          $a0, -0x3F54($s0)
    ctx->pc = 0x1ba97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951084)));
    // 0x1ba980: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1BA980u;
    SET_GPR_U32(ctx, 31, 0x1BA988u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1BA980u, 0x1BA988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA988u;
}
